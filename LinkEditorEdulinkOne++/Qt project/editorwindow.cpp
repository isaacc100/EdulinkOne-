#include "editorwindow.h"
#include "ui_editorwindow.h"
#include <QMessageBox>
#include <fstream>
#include <string>

EditUrlApp::EditUrlApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);

    // Load existing URL if available
    loadUrl();

    // Connect the Confirm button to the save URL function
    connect(ui->ConfirmBut, &QPushButton::clicked, this, &EditUrlApp::saveUrl);

    // Connect the Instructions button to show the instructions
    connect(ui->InstructBut, &QPushButton::clicked, this, &EditUrlApp::showInstructions);

    // Connect the Close button to close the application
    connect(ui->CloseBut, &QPushButton::clicked, this, &EditUrlApp::close);
}

EditUrlApp::~EditUrlApp() {
    delete ui;
}

void EditUrlApp::saveUrl() {
    QString url = ui->URLInputBox->toPlainText();

    if (url.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a valid URL.");
        return;
    }

    // Check if the URL has a protocol, if not, add "https://"
    if (!url.startsWith("http://") && !url.startsWith("https://")) {
        url = "https://" + url;
    }

    // Save URL to the file
    std::wofstream outfile(L"saved_url.txt");
    if (outfile.is_open()) {
        outfile << url.toStdWString();
        outfile.close();
        QMessageBox::information(this, "Success", "URL updated successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Unable to save the URL.");
    }
}

void EditUrlApp::loadUrl() {
    std::wifstream infile(L"saved_url.txt");
    std::wstring savedUrl;
    if (infile.is_open()) {
        std::getline(infile, savedUrl);
        infile.close();
        if (!savedUrl.empty()) {
            ui->URLInputBox->setPlainText(QString::fromStdWString(savedUrl));
        }
    }
}

void EditUrlApp::showInstructions() {
    QMessageBox::information(this, "Instructions", "Paste the new URL in the box and press Confirm to save it.");
}
