/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionSave_config;
    QAction *actionSave_log;
    QAction *actionRefresh_connections;
    QAction *actionSerial_baudrate_action1200;
    QAction *actionSerial_baudrate_action2400;
    QAction *actionSerial_baudrate_action4800;
    QAction *actionSerial_baudrate_action9600;
    QAction *actionSerial_baudrate_action19200;
    QAction *actionSerial_baudrate_action38400;
    QAction *actionSerial_baudrate_action57600;
    QAction *actionSerial_baudrate_action115200;
    QAction *actionSerial_stopBits0;
    QAction *actionSerial_stopBits1;
    QAction *actionSerial_stopBits2;
    QAction *actionSerial_parityBits_none;
    QAction *actionSerial_parityBits_even;
    QAction *actionSerial_parityBits_odd;
    QAction *actionSerial_parityBits_space;
    QAction *actionSerial_parityBits_mark;
    QAction *actionSerial_dataBits_5;
    QAction *actionSerial_dataBits_6;
    QAction *actionSerial_dataBits_7;
    QAction *actionSerial_dataBits_8;
    QAction *actionSerial_connect;
    QAction *actionLoad_config;
    QAction *actionLoad_log;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *deviceCommandComboBox;
    QComboBox *deviceComboBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *deviceCommandComboBox_2;
    QTextEdit *textEdit;
    QLabel *label_rawData;
    QLabel *label_filteredData;
    QLabel *label_deviceCommand;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *pushButton_read;
    QPushButton *pushButton_write;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuConfig;
    QMenu *menuSerial_Port;
    QMenu *menuSerial_baudrate;
    QMenu *menuSerial_stop_bits;
    QMenu *menuSerial_parity_bits;
    QMenu *menuSerial_data_bits;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSave_config = new QAction(MainWindow);
        actionSave_config->setObjectName(QString::fromUtf8("actionSave_config"));
        actionSave_log = new QAction(MainWindow);
        actionSave_log->setObjectName(QString::fromUtf8("actionSave_log"));
        actionRefresh_connections = new QAction(MainWindow);
        actionRefresh_connections->setObjectName(QString::fromUtf8("actionRefresh_connections"));
        actionSerial_baudrate_action1200 = new QAction(MainWindow);
        actionSerial_baudrate_action1200->setObjectName(QString::fromUtf8("actionSerial_baudrate_action1200"));
        actionSerial_baudrate_action1200->setCheckable(true);
        actionSerial_baudrate_action2400 = new QAction(MainWindow);
        actionSerial_baudrate_action2400->setObjectName(QString::fromUtf8("actionSerial_baudrate_action2400"));
        actionSerial_baudrate_action2400->setCheckable(true);
        actionSerial_baudrate_action4800 = new QAction(MainWindow);
        actionSerial_baudrate_action4800->setObjectName(QString::fromUtf8("actionSerial_baudrate_action4800"));
        actionSerial_baudrate_action4800->setCheckable(true);
        actionSerial_baudrate_action9600 = new QAction(MainWindow);
        actionSerial_baudrate_action9600->setObjectName(QString::fromUtf8("actionSerial_baudrate_action9600"));
        actionSerial_baudrate_action9600->setCheckable(true);
        actionSerial_baudrate_action19200 = new QAction(MainWindow);
        actionSerial_baudrate_action19200->setObjectName(QString::fromUtf8("actionSerial_baudrate_action19200"));
        actionSerial_baudrate_action19200->setCheckable(true);
        actionSerial_baudrate_action38400 = new QAction(MainWindow);
        actionSerial_baudrate_action38400->setObjectName(QString::fromUtf8("actionSerial_baudrate_action38400"));
        actionSerial_baudrate_action38400->setCheckable(true);
        actionSerial_baudrate_action57600 = new QAction(MainWindow);
        actionSerial_baudrate_action57600->setObjectName(QString::fromUtf8("actionSerial_baudrate_action57600"));
        actionSerial_baudrate_action57600->setCheckable(true);
        actionSerial_baudrate_action115200 = new QAction(MainWindow);
        actionSerial_baudrate_action115200->setObjectName(QString::fromUtf8("actionSerial_baudrate_action115200"));
        actionSerial_baudrate_action115200->setCheckable(true);
        actionSerial_baudrate_action115200->setChecked(true);
        actionSerial_stopBits0 = new QAction(MainWindow);
        actionSerial_stopBits0->setObjectName(QString::fromUtf8("actionSerial_stopBits0"));
        actionSerial_stopBits0->setCheckable(true);
        actionSerial_stopBits0->setChecked(true);
        actionSerial_stopBits1 = new QAction(MainWindow);
        actionSerial_stopBits1->setObjectName(QString::fromUtf8("actionSerial_stopBits1"));
        actionSerial_stopBits1->setCheckable(true);
        actionSerial_stopBits2 = new QAction(MainWindow);
        actionSerial_stopBits2->setObjectName(QString::fromUtf8("actionSerial_stopBits2"));
        actionSerial_stopBits2->setCheckable(true);
        actionSerial_parityBits_none = new QAction(MainWindow);
        actionSerial_parityBits_none->setObjectName(QString::fromUtf8("actionSerial_parityBits_none"));
        actionSerial_parityBits_none->setCheckable(true);
        actionSerial_parityBits_none->setChecked(true);
        actionSerial_parityBits_even = new QAction(MainWindow);
        actionSerial_parityBits_even->setObjectName(QString::fromUtf8("actionSerial_parityBits_even"));
        actionSerial_parityBits_even->setCheckable(true);
        actionSerial_parityBits_odd = new QAction(MainWindow);
        actionSerial_parityBits_odd->setObjectName(QString::fromUtf8("actionSerial_parityBits_odd"));
        actionSerial_parityBits_odd->setCheckable(true);
        actionSerial_parityBits_space = new QAction(MainWindow);
        actionSerial_parityBits_space->setObjectName(QString::fromUtf8("actionSerial_parityBits_space"));
        actionSerial_parityBits_space->setCheckable(true);
        actionSerial_parityBits_mark = new QAction(MainWindow);
        actionSerial_parityBits_mark->setObjectName(QString::fromUtf8("actionSerial_parityBits_mark"));
        actionSerial_parityBits_mark->setCheckable(true);
        actionSerial_dataBits_5 = new QAction(MainWindow);
        actionSerial_dataBits_5->setObjectName(QString::fromUtf8("actionSerial_dataBits_5"));
        actionSerial_dataBits_5->setCheckable(true);
        actionSerial_dataBits_6 = new QAction(MainWindow);
        actionSerial_dataBits_6->setObjectName(QString::fromUtf8("actionSerial_dataBits_6"));
        actionSerial_dataBits_6->setCheckable(true);
        actionSerial_dataBits_7 = new QAction(MainWindow);
        actionSerial_dataBits_7->setObjectName(QString::fromUtf8("actionSerial_dataBits_7"));
        actionSerial_dataBits_7->setCheckable(true);
        actionSerial_dataBits_8 = new QAction(MainWindow);
        actionSerial_dataBits_8->setObjectName(QString::fromUtf8("actionSerial_dataBits_8"));
        actionSerial_dataBits_8->setCheckable(true);
        actionSerial_dataBits_8->setChecked(true);
        actionSerial_connect = new QAction(MainWindow);
        actionSerial_connect->setObjectName(QString::fromUtf8("actionSerial_connect"));
        actionSerial_connect->setCheckable(true);
        actionLoad_config = new QAction(MainWindow);
        actionLoad_config->setObjectName(QString::fromUtf8("actionLoad_config"));
        actionLoad_log = new QAction(MainWindow);
        actionLoad_log->setObjectName(QString::fromUtf8("actionLoad_log"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 771, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        deviceCommandComboBox = new QComboBox(horizontalLayoutWidget);
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->addItem(QString());
        deviceCommandComboBox->setObjectName(QString::fromUtf8("deviceCommandComboBox"));

        horizontalLayout->addWidget(deviceCommandComboBox);

        deviceComboBox = new QComboBox(horizontalLayoutWidget);
        deviceComboBox->setObjectName(QString::fromUtf8("deviceComboBox"));

        horizontalLayout->addWidget(deviceComboBox);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(9, 394, 771, 151));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 769, 149));
        scrollArea->setWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 60, 771, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        deviceCommandComboBox_2 = new QComboBox(horizontalLayoutWidget_2);
        deviceCommandComboBox_2->setObjectName(QString::fromUtf8("deviceCommandComboBox_2"));

        horizontalLayout_2->addWidget(deviceCommandComboBox_2);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 110, 771, 31));
        label_rawData = new QLabel(centralwidget);
        label_rawData->setObjectName(QString::fromUtf8("label_rawData"));
        label_rawData->setGeometry(QRect(12, 371, 121, 20));
        label_filteredData = new QLabel(centralwidget);
        label_filteredData->setObjectName(QString::fromUtf8("label_filteredData"));
        label_filteredData->setGeometry(QRect(10, 201, 121, 20));
        label_deviceCommand = new QLabel(centralwidget);
        label_deviceCommand->setObjectName(QString::fromUtf8("label_deviceCommand"));
        label_deviceCommand->setGeometry(QRect(10, 10, 141, 16));
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 220, 771, 151));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 769, 149));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton_read = new QPushButton(centralwidget);
        pushButton_read->setObjectName(QString::fromUtf8("pushButton_read"));
        pushButton_read->setGeometry(QRect(110, 150, 91, 31));
        pushButton_write = new QPushButton(centralwidget);
        pushButton_write->setObjectName(QString::fromUtf8("pushButton_write"));
        pushButton_write->setGeometry(QRect(10, 150, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuConfig = new QMenu(menubar);
        menuConfig->setObjectName(QString::fromUtf8("menuConfig"));
        menuSerial_Port = new QMenu(menuConfig);
        menuSerial_Port->setObjectName(QString::fromUtf8("menuSerial_Port"));
        menuSerial_baudrate = new QMenu(menuConfig);
        menuSerial_baudrate->setObjectName(QString::fromUtf8("menuSerial_baudrate"));
        menuSerial_stop_bits = new QMenu(menuConfig);
        menuSerial_stop_bits->setObjectName(QString::fromUtf8("menuSerial_stop_bits"));
        menuSerial_parity_bits = new QMenu(menuConfig);
        menuSerial_parity_bits->setObjectName(QString::fromUtf8("menuSerial_parity_bits"));
        menuSerial_data_bits = new QMenu(menuConfig);
        menuSerial_data_bits->setObjectName(QString::fromUtf8("menuSerial_data_bits"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuConfig->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSave_config);
        menuFile->addAction(actionLoad_config);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_log);
        menuFile->addAction(actionLoad_log);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuConfig->addAction(actionRefresh_connections);
        menuConfig->addSeparator();
        menuConfig->addAction(actionSerial_connect);
        menuConfig->addAction(menuSerial_Port->menuAction());
        menuConfig->addAction(menuSerial_baudrate->menuAction());
        menuConfig->addAction(menuSerial_data_bits->menuAction());
        menuConfig->addAction(menuSerial_stop_bits->menuAction());
        menuConfig->addAction(menuSerial_parity_bits->menuAction());
        menuSerial_baudrate->addAction(actionSerial_baudrate_action1200);
        menuSerial_baudrate->addAction(actionSerial_baudrate_action2400);
        menuSerial_baudrate->addAction(actionSerial_baudrate_action4800);
        menuSerial_baudrate->addAction(actionSerial_baudrate_action9600);
        menuSerial_baudrate->addAction(actionSerial_baudrate_action19200);
        menuSerial_baudrate->addAction(actionSerial_baudrate_action38400);
        menuSerial_baudrate->addAction(actionSerial_baudrate_action57600);
        menuSerial_baudrate->addAction(actionSerial_baudrate_action115200);
        menuSerial_stop_bits->addAction(actionSerial_stopBits0);
        menuSerial_stop_bits->addAction(actionSerial_stopBits1);
        menuSerial_stop_bits->addAction(actionSerial_stopBits2);
        menuSerial_parity_bits->addAction(actionSerial_parityBits_none);
        menuSerial_parity_bits->addAction(actionSerial_parityBits_even);
        menuSerial_parity_bits->addAction(actionSerial_parityBits_odd);
        menuSerial_parity_bits->addAction(actionSerial_parityBits_space);
        menuSerial_parity_bits->addAction(actionSerial_parityBits_mark);
        menuSerial_data_bits->addAction(actionSerial_dataBits_5);
        menuSerial_data_bits->addAction(actionSerial_dataBits_6);
        menuSerial_data_bits->addAction(actionSerial_dataBits_7);
        menuSerial_data_bits->addAction(actionSerial_dataBits_8);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionSave_config->setText(QCoreApplication::translate("MainWindow", "Save config", nullptr));
        actionSave_log->setText(QCoreApplication::translate("MainWindow", "Save log", nullptr));
        actionRefresh_connections->setText(QCoreApplication::translate("MainWindow", "Refresh connections", nullptr));
        actionSerial_baudrate_action1200->setText(QCoreApplication::translate("MainWindow", "1200", nullptr));
        actionSerial_baudrate_action2400->setText(QCoreApplication::translate("MainWindow", "2400", nullptr));
        actionSerial_baudrate_action4800->setText(QCoreApplication::translate("MainWindow", "4800", nullptr));
        actionSerial_baudrate_action9600->setText(QCoreApplication::translate("MainWindow", "9600", nullptr));
        actionSerial_baudrate_action19200->setText(QCoreApplication::translate("MainWindow", "19200", nullptr));
        actionSerial_baudrate_action38400->setText(QCoreApplication::translate("MainWindow", "38400", nullptr));
        actionSerial_baudrate_action57600->setText(QCoreApplication::translate("MainWindow", "57600", nullptr));
        actionSerial_baudrate_action115200->setText(QCoreApplication::translate("MainWindow", "115200", nullptr));
        actionSerial_stopBits0->setText(QCoreApplication::translate("MainWindow", "No bits", nullptr));
        actionSerial_stopBits1->setText(QCoreApplication::translate("MainWindow", "1 bit", nullptr));
        actionSerial_stopBits2->setText(QCoreApplication::translate("MainWindow", "2 bits", nullptr));
        actionSerial_parityBits_none->setText(QCoreApplication::translate("MainWindow", "No parity", nullptr));
        actionSerial_parityBits_even->setText(QCoreApplication::translate("MainWindow", "Even parity", nullptr));
        actionSerial_parityBits_odd->setText(QCoreApplication::translate("MainWindow", "Odd parity", nullptr));
        actionSerial_parityBits_space->setText(QCoreApplication::translate("MainWindow", "Space parity", nullptr));
        actionSerial_parityBits_mark->setText(QCoreApplication::translate("MainWindow", "Mark parity", nullptr));
        actionSerial_dataBits_5->setText(QCoreApplication::translate("MainWindow", "5 bits", nullptr));
        actionSerial_dataBits_6->setText(QCoreApplication::translate("MainWindow", "6 bits", nullptr));
        actionSerial_dataBits_7->setText(QCoreApplication::translate("MainWindow", "7 bits", nullptr));
        actionSerial_dataBits_8->setText(QCoreApplication::translate("MainWindow", "8 bits", nullptr));
        actionSerial_connect->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        actionLoad_config->setText(QCoreApplication::translate("MainWindow", "Load config", nullptr));
        actionLoad_log->setText(QCoreApplication::translate("MainWindow", "Load log", nullptr));
        deviceCommandComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "GPS_MTK3339", nullptr));
        deviceCommandComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "FRAM_MB85RS64V_SPI", nullptr));
        deviceCommandComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "DISPLAY_ST7735R_SPI", nullptr));
        deviceCommandComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "MEMS_FXO8700_I2C", nullptr));
        deviceCommandComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "MEMS_FXAS21002_I2C", nullptr));
        deviceCommandComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "BARO_BMP280_I2C", nullptr));
        deviceCommandComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "RADIO_RFM9x_SPI", nullptr));
        deviceCommandComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "EEPROM_##_I2C", nullptr));
        deviceCommandComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "EEPROM_##_SPI", nullptr));
        deviceCommandComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "DISPLAY_##_I2C", nullptr));

        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Raw write...</p></body></html>", nullptr));
        label_rawData->setText(QCoreApplication::translate("MainWindow", "Raw data:", nullptr));
        label_filteredData->setText(QCoreApplication::translate("MainWindow", "Filtered data:", nullptr));
        label_deviceCommand->setText(QCoreApplication::translate("MainWindow", "Device command:", nullptr));
        pushButton_read->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        pushButton_write->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuConfig->setTitle(QCoreApplication::translate("MainWindow", "Config", nullptr));
        menuSerial_Port->setTitle(QCoreApplication::translate("MainWindow", "Serial port", nullptr));
        menuSerial_baudrate->setTitle(QCoreApplication::translate("MainWindow", "Serial baudrate", nullptr));
        menuSerial_stop_bits->setTitle(QCoreApplication::translate("MainWindow", "Serial stop bits", nullptr));
        menuSerial_parity_bits->setTitle(QCoreApplication::translate("MainWindow", "Serial parity bits", nullptr));
        menuSerial_data_bits->setTitle(QCoreApplication::translate("MainWindow", "Serial data bits", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
