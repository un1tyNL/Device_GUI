#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QObject>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow), serialPortMenuGroup(new QActionGroup(this))

{
  ui->setupUi(this);
  serialPortMenuGroup->setExclusive(true);
  updateSerialPortMenu();

  QObject::connect(ui->actionRefresh_connections, &QAction::triggered, this, &MainWindow::on_menuConfig_actionRefreshConnections_update);
}

MainWindow::~MainWindow()
{
  delete ui;
  delete serialPortMenuGroup;
  cleanSerialPortMenu();
}

void MainWindow::on_menuFile_actionExit_triggered()
{
  // Connected to closing the UI by moc.
}

void MainWindow::on_menuConfig_actionRefreshConnections_update()
{
  qDebug() << "Refreshing commport information";
  updateSerialPortMenu();
}

void MainWindow::on_menuConfig_actionCommPort_update()
{
  QAction* selectedCommPort = serialPortMenuGroup->checkedAction();
  if (selectedCommPort)
  {
    QString selectedCommPortName = selectedCommPort->text();
    serialPort.setPortName(selectedCommPortName);
  }
}

void MainWindow::updateSerialPortMenu(void)
{
  cleanSerialPortMenu();
  serialPortsInfo = QSerialPortInfo::availablePorts();
  qDebug() << "Updating commport information, number of commports: " << serialPortsInfo.count();
  if (serialPortsInfo.count() > 0)
  {
    ui->menuSerial_Port->setDisabled(false);
    for (unsigned int index = 0; index < (unsigned int) serialPortsInfo.count(); index++)
    {
      // Create menu action.
      QString  serialPortMenuName = serialPortsInfo.at(index).portName();
      QAction* serialPortMenuItem = new QAction(serialPortMenuName);
      serialPortMenuItem->setCheckable(true);

      // Add menu action to list & group.
      ui->menuSerial_Port->addAction(serialPortMenuItem);
      serialPortMenuGroup->addAction(serialPortMenuItem);
      QObject::connect(serialPortMenuItem, &QAction::changed, this, &MainWindow::on_menuConfig_actionCommPort_update);
    }
  }
}

void MainWindow::cleanSerialPortMenu(void)
{
  qDebug() << "Clearing commport information";
  serialPortsInfo.clear();
  QList<QAction*> actionList = serialPortMenuGroup->actions();
  for (auto& action : actionList)
  {
    delete action;
  }

  ui->menuSerial_Port->setDisabled(true);
}
