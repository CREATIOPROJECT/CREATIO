#ifndef CREATIONWINDOW_H
#define CREATIONWINDOW_H

#include <QWidget>

namespace Ui {
	class Creationwindow;
}
class WalletModel;

class Creationwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Creationwindow(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Creationwindow();    

private slots:
    void on_Reload_clicked();

    void on_Back_clicked();

private:
	Ui::Creationwindow *ui;
    WalletModel *model;
};

#endif // CREATIONWINDOW_H