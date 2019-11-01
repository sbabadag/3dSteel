#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myOCCView = new OCC_View(this);
    setCentralWidget(myOCCView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

