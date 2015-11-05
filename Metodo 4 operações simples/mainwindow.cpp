#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_13_clicked()
{
    int operacao = 0, n1 = 0, n2 = 0, resultado = 0;

    n1 = ui ->lineEditNumero1->text().toInt();
    n2 = ui ->lineEditNumero2->text().toInt();
    operacao = ui->comboBoxOperacoes->currentIndex();
    switch (operacao) {
    case 0:
        resultado = n1 + n2;
        break;

    case 1:
        resultado = n1 - n2;
        break;

    case 2:
        resultado = n1 * n2;
        break;

     case 3:
        resultado = n1 / n2;
        break;
    }

        ui->labelResultado->setText(QString::number(resultado));


}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEditNumero1->setText("");
    ui->lineEditNumero2->setText("");
    ui->labelResultado->setText("");
}
