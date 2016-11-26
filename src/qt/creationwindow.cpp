#include "ui_creationwindow.h"
#include "guiutil.h"
#include "bitcoingui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Creationwindow::Creationwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Creationwindow),
    model(0)
{
    ui->setupUi(this);
}
    void Creationwindow::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Creationwindow::~Creationwindow()
{
    delete ui;
}

void Creationwindow::on_Reload_clicked()
{
    ui->webView->reload();
}

void Creationwindow::on_Back_clicked()
{
    ui->webView->load(QUrl("http://coinc.azurewebsites.net/create/"));
}