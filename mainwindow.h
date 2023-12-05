#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QAction>
#include <QActionGroup>
#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui
{
  class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

signals:
  void on_menuConfig_actionRefreshConnections_triggered();

private slots:
  // GUI related slots
  /**
   * @brief on_menuFile_actionExit_triggered
   */
  void on_menuFile_actionExit_triggered();

  // Serial port related slots
  /**
   * @brief on_menuConfig_actionRefreshConnections_triggered
   */
  void on_menuConfig_actionRefreshConnections_update();
  /**
   * @brief on_menuConfig_actionCommPort_update
   */
  void on_menuConfig_actionCommPort_update();

private:
  Ui::MainWindow *ui;

  // Serial port related functions
  /**
   * @brief updateSerialPortMenu
   */
  void updateSerialPortMenu(void);
  /**
   * @brief cleanSerialPortMenu
   */
  void cleanSerialPortMenu(void);
  /**
   * @brief selectedSerialPortMenu
   */
  void selectedSerialPortMenu(void);

  // Serial port related variables
  /**
   * @brief serialPortMenuGroup
   */
  QActionGroup *serialPortMenuGroup;
  /**
   * @brief serialPortsInfo
   */
  QList<QSerialPortInfo> serialPortsInfo;
  /**
   * @brief serialPort
   */
  QSerialPort serialPort;
};
#endif // MAINWINDOW_H
