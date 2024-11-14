#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class Editor;
}

class EditUrlApp : public QMainWindow {
    Q_OBJECT

public:
    explicit EditUrlApp(QWidget *parent = nullptr);
    ~EditUrlApp();

private slots:
    void saveUrl();
    void loadUrl();
    void showInstructions();

private:
    Ui::Editor *ui;
};

#endif // MAINWINDOW_H
