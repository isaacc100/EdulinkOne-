#include <windows.h>
#include <fstream>
#include <string>
#include <iostream>

void ShowConsoleWindowAndSetIcon() {
    // Allocate a console for the application
    AllocConsole();
    HWND hwnd = GetConsoleWindow();

    // Set a custom icon for the console window
    HICON hIcon = (HICON)LoadImage(NULL, L"Logo.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE);
    if (hIcon) {
        SendMessage(hwnd, WM_SETICON, ICON_BIG, (LPARAM)hIcon);
        SendMessage(hwnd, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);
    }

    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);
    freopen_s(&fp, "CONIN$", "r", stdin);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Hide the console window initially
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);

    std::wstring url;
    std::wifstream infile(L"saved_url.txt");

    if (infile.fail()) {
        // If no saved URL, show console, ask the user for a URL and save it
        ShowConsoleWindowAndSetIcon();
        std::wcout << L"Enter a URL: ";
        std::getline(std::wcin, url);

        // Check if the URL has a protocol, if not, add "https://"
        if (url.find(L"http://") != 0 && url.find(L"https://") != 0) {
            url = L"https://" + url;
        }

        std::wofstream outfile(L"saved_url.txt");
        if (outfile.is_open()) {
            outfile << url;
            outfile.close();
        }
        else {
            std::wcerr << L"Error: Unable to save the URL." << std::endl;
            return 1;
        }
    }
    else {
        // If a URL is already saved, read it
        std::getline(infile, url);
        infile.close();
    }

    if (url.empty()) {
        std::wcerr << L"Error: URL is empty." << std::endl;
        return 1;
    }

    HINSTANCE result = ShellExecuteW(0, 0, url.c_str(), 0, 0, SW_SHOWNORMAL);
    if ((int)result <= 32) {
        std::wcerr << L"Error: Failed to open the URL." << std::endl;
        return 1;
    }

    return 0;
}
