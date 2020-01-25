#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(auto& item : QSerialPortInfo::availablePorts()){
        ui->box_serial->addItem(item.portName());
    }

    for(auto& item : QSerialPortInfo::standardBaudRates()){
        ui->box_velocidade->addItem(QString::number(item));
    }

    connect(&serial,
               SIGNAL(readyRead()),
               this,
               SLOT(dadosRecebidos()));
}

MainWindow::~MainWindow()
{
    serial.close();
    delete ui;
}

void MainWindow::dadosRecebidos()
{
   auto data = serial.readAll();
   auto dados = QJsonDocument::fromJson(data).object().toVariantMap();

   if(dados.contains("POWER")){
    power = dados["POWER"].toString();
    ui->tabelaStats->setItem(1,1, new QTableWidgetItem(power));
   }

   if(dados.contains("VOLT")){
    volt = dados["VOLT"].toString();
    ui->tabelaStats->setItem(2,1, new QTableWidgetItem(volt));
   }

   if(dados.contains("AMPER")){
    amper = dados["AMPER"].toString();
    ui->tabelaStats->setItem(3,1, new QTableWidgetItem(amper));
   }


}

void MainWindow::on_btnPlug_clicked()
{
    plugStatus = !plugStatus;

    if(plugStatus){
        serial.setPortName(ui->box_serial->currentText());
        serial.setBaudRate(ui->box_velocidade->currentText().toInt());

        if(serial.open(QIODevice::ReadWrite)){
            ui->status_conexao->setText("Status: Conectado");
            ui -> btnPlug ->setText("Desconectar");
        }
    }else{
        serial.close();
        ui->status_conexao->setText("Status: Desconectado");
        ui -> btnPlug ->setText("Conectar");
    }
}


void MainWindow::on_btnAction_clicked()
{
    action = !action;
    qDebug() << action;

    if(action){
        serial.write("{\"ACAO\": 1}");
    }else{
        serial.write("{\"ACAO\": 0}");
    }
}
