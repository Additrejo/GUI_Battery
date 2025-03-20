/********************************************************************************
** Form generated from reading UI file 'interfaceaUqidi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef INTERFACEAUQIDI_H
#define INTERFACEAUQIDI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *LeftMenuContainer;
    QHBoxLayout *horizontalLayout_2;
    QWidget *leftMenuSubContainer;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *menuBtn;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *homeBtn;
    QPushButton *dataBtn;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *infoBtn;
    QPushButton *reportBtn;
    QPushButton *settingsBtn;
    QPushButton *helpBtn;
    QLabel *Linxlogo;
    QLabel *Bateria;
    QProgressBar *Batterylevel;
    QLabel *Bateria1;
    QFrame *line;
    QColumnView *status_5;
    QProgressBar *progressBar_3;
    QColumnView *columnView_2;
    QLabel *status_4;
    QProgressBar *progressBar_4;
    QWidget *widget;
    QLabel *status_3;
    QTextBrowser *Voltaje;
    QProgressBar *progressBar_2;
    QLCDNumber *VoltajeEntrada;
    QWidget *capacity;
    QLabel *status_2;
    QLCDNumber *VoltajeEntrada_2;
    QTextBrowser *Ah;
    QWidget *widget_2;
    QLabel *status;
    QTextBrowser *textBrowser;
    QWidget *widget_3;
    QTextBrowser *textBrowser_2;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QWidget *widget_4;
    QLabel *status_7;
    QTextBrowser *Voltaje_3;
    QProgressBar *progressBar_6;
    QLCDNumber *VoltajeEntrada_4;
    QWidget *widget_5;
    QTextBrowser *textBrowser_3;
    QLabel *label_2;
    QLCDNumber *lcdNumber_2;
    QColumnView *columnView_3;
    QWidget *widget_6;
    QLabel *model;
    QLabel *label_3;
    QWidget *widget_7;
    QLabel *model_2;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget_8;
    QLabel *label_6;
    QLabel *model_3;
    QLabel *label_7;
    QWidget *mainBodyContainer;
    QWidget *widget_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(953, 592);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"  border:none;\n"
"  background-color:transparent;\n"
"  background:none;\n"
"  padding:0;\n"
"  margin:0;\n"
"  color:white;\n"
"}\n"
"#centralwidget{\n"
"  background-color:#1f232a;\n"
"}\n"
"#leftMenuSubContainer{\n"
"  background-color:#16191d;\n"
"}\n"
"QPushButton{\n"
"  text-align: left;\n"
"  padding: 2px 5px;\n"
"  color:white;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(31, 35, 42, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        centralwidget->setPalette(palette);
        centralwidget->setMouseTracking(false);
        centralwidget->setTabletTracking(false);
        LeftMenuContainer = new QWidget(centralwidget);
        LeftMenuContainer->setObjectName(QString::fromUtf8("LeftMenuContainer"));
        LeftMenuContainer->setEnabled(true);
        LeftMenuContainer->setGeometry(QRect(0, 0, 141, 591));
        horizontalLayout_2 = new QHBoxLayout(LeftMenuContainer);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        leftMenuSubContainer = new QWidget(LeftMenuContainer);
        leftMenuSubContainer->setObjectName(QString::fromUtf8("leftMenuSubContainer"));
        leftMenuSubContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52);"));
        verticalLayout_2 = new QVBoxLayout(leftMenuSubContainer);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(leftMenuSubContainer);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setLayoutDirection(Qt::LeftToRight);
        frame->setStyleSheet(QString::fromUtf8("#menuBtn {\n"
"color: rgb(255, 255, 255);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        menuBtn = new QPushButton(frame);
        menuBtn->setObjectName(QString::fromUtf8("menuBtn"));
        menuBtn->setEnabled(true);
        menuBtn->setLayoutDirection(Qt::LeftToRight);
        menuBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/align-justify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuBtn->setIcon(icon);
        menuBtn->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(menuBtn, 0, Qt::AlignVCenter);


        verticalLayout_2->addWidget(frame, 0, Qt::AlignTop);

        frame_2 = new QFrame(leftMenuSubContainer);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 10, 0, 10);
        homeBtn = new QPushButton(frame_2);
        homeBtn->setObjectName(QString::fromUtf8("homeBtn"));
        homeBtn->setEnabled(true);
        homeBtn->setStyleSheet(QString::fromUtf8("background-color: #1f232a;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        homeBtn->setIcon(icon1);
        homeBtn->setIconSize(QSize(24, 24));

        verticalLayout_4->addWidget(homeBtn);

        dataBtn = new QPushButton(frame_2);
        dataBtn->setObjectName(QString::fromUtf8("dataBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/activity.svg"), QSize(), QIcon::Normal, QIcon::Off);
        dataBtn->setIcon(icon2);
        dataBtn->setIconSize(QSize(24, 24));

        verticalLayout_4->addWidget(dataBtn, 0, Qt::AlignTop);


        verticalLayout_2->addWidget(frame_2, 0, Qt::AlignLeft);

        frame_3 = new QFrame(leftMenuSubContainer);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        infoBtn = new QPushButton(frame_3);
        infoBtn->setObjectName(QString::fromUtf8("infoBtn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        infoBtn->setIcon(icon3);
        infoBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(infoBtn);

        reportBtn = new QPushButton(frame_3);
        reportBtn->setObjectName(QString::fromUtf8("reportBtn"));
        reportBtn->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/printer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        reportBtn->setIcon(icon4);
        reportBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(reportBtn);

        settingsBtn = new QPushButton(frame_3);
        settingsBtn->setObjectName(QString::fromUtf8("settingsBtn"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        settingsBtn->setIcon(icon5);
        settingsBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(settingsBtn);

        helpBtn = new QPushButton(frame_3);
        helpBtn->setObjectName(QString::fromUtf8("helpBtn"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/help-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        helpBtn->setIcon(icon6);
        helpBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(helpBtn);


        verticalLayout_2->addWidget(frame_3);


        horizontalLayout_2->addWidget(leftMenuSubContainer);

        Linxlogo = new QLabel(centralwidget);
        Linxlogo->setObjectName(QString::fromUtf8("Linxlogo"));
        Linxlogo->setGeometry(QRect(450, 20, 191, 61));
        Linxlogo->setPixmap(QPixmap(QString::fromUtf8(":/Linx/LINX-Negro.png")));
        Linxlogo->setScaledContents(true);
        Bateria = new QLabel(centralwidget);
        Bateria->setObjectName(QString::fromUtf8("Bateria"));
        Bateria->setGeometry(QRect(180, 190, 81, 211));
        Bateria->setPixmap(QPixmap(QString::fromUtf8(":/Bater\303\255a/bater\303\241 sola.png")));
        Bateria->setScaledContents(true);
        Batterylevel = new QProgressBar(centralwidget);
        Batterylevel->setObjectName(QString::fromUtf8("Batterylevel"));
        Batterylevel->setGeometry(QRect(180, 220, 81, 171));
        QFont font;
        font.setPointSize(20);
        Batterylevel->setFont(font);
        Batterylevel->setStyleSheet(QString::fromUtf8("#Batterylevel {\n"
"    background-color: #1f232a; /* Color de fondo de la barra de progreso */\n"
"    border: 1px solid gray; /* Borde blanco */\n"
"}\n"
"\n"
"#Batterylevel::chunk {\n"
"    background-color: #2ecc71; /* Color de la parte de progreso */\n"
"}\n"
"\n"
"#Batterylevel::subcontrol:indicator {\n"
"    subcontrol-position: top; /* Colocar el texto (porcentaje) en la parte superior */\n"
"    subcontrol-origin: margin;\n"
"}\n"
"#Batterylevel::subcontrol:text {\n"
"    top: 4px; /* Ajustar el texto ligeramente hacia abajo */\n"
"    background-color: transparent; /* Fondo transparente */\n"
"    color: white; /* Color del texto */\n"
"}\n"
""));
        Batterylevel->setMinimum(0);
        Batterylevel->setValue(60);
        Batterylevel->setAlignment(Qt::AlignCenter);
        Batterylevel->setTextVisible(true);
        Batterylevel->setOrientation(Qt::Vertical);
        Batterylevel->setInvertedAppearance(false);
        Batterylevel->setTextDirection(QProgressBar::TopToBottom);
        Bateria1 = new QLabel(centralwidget);
        Bateria1->setObjectName(QString::fromUtf8("Bateria1"));
        Bateria1->setGeometry(QRect(180, 410, 100, 51));
        Bateria1->setMaximumSize(QSize(100, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Roboto Black"));
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setWeight(75);
        Bateria1->setFont(font1);
        Bateria1->setStyleSheet(QString::fromUtf8("#Bateria1 {\n"
"    background-color: #888888; /* Cambiar el color de fondo del cuadro a un gris m\303\241s oscuro */\n"
"    color: black; /* Color del texto negro */\n"
"    border: 1px solid #666666; /* Borde del cuadro */\n"
"    border-radius: 7px; /* Bordes redondeados */\n"
"    padding: 4px; /* Espacio interno */\n"
"}\n"
""));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(400, 130, 3, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        status_5 = new QColumnView(centralwidget);
        status_5->setObjectName(QString::fromUtf8("status_5"));
        status_5->setGeometry(QRect(350, 140, 371, 331));
        status_5->setStyleSheet(QString::fromUtf8("#status_5{ \n"
"  border: 1px solid gray; /* Borde blanco */\n"
"  background-color: #1f232a;\n"
"}"));
        progressBar_3 = new QProgressBar(centralwidget);
        progressBar_3->setObjectName(QString::fromUtf8("progressBar_3"));
        progressBar_3->setGeometry(QRect(290, 220, 20, 171));
        progressBar_3->setStyleSheet(QString::fromUtf8("#progressBar_3 {\n"
"    background-color: #1f232a; /* Color de fondo de la barra de progreso */\n"
"    border: 1px solid gray; /* Borde blanco */\n"
"}\n"
"\n"
"#progressBar_3::chunk {\n"
"    background-color: #3498db; /* Cambiar el color de la parte de progreso a azul */\n"
"}\n"
"\n"
"#progressBar_3::subcontrol:indicator {\n"
"    subcontrol-position: top; /* Colocar el texto (porcentaje) en la parte superior */\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"#progressBar_3::subcontrol:text {\n"
"    top: 4px; /* Ajustar el texto ligeramente hacia abajo */\n"
"    background-color: transparent; /* Fondo transparente */\n"
"    color: white; /* Color del texto */\n"
"}\n"
"\n"
""));
        progressBar_3->setMinimum(0);
        progressBar_3->setValue(90);
        progressBar_3->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        progressBar_3->setTextVisible(false);
        progressBar_3->setOrientation(Qt::Vertical);
        progressBar_3->setInvertedAppearance(false);
        progressBar_3->setTextDirection(QProgressBar::TopToBottom);
        columnView_2 = new QColumnView(centralwidget);
        columnView_2->setObjectName(QString::fromUtf8("columnView_2"));
        columnView_2->setGeometry(QRect(170, 140, 181, 331));
        columnView_2->setStyleSheet(QString::fromUtf8("#columnView_2{ \n"
"  border: 1px solid gray; /* Borde blanco */\n"
"  background-color: #1f232a;\n"
"}"));
        status_4 = new QLabel(centralwidget);
        status_4->setObjectName(QString::fromUtf8("status_4"));
        status_4->setGeometry(QRect(180, 140, 111, 31));
        QFont font2;
        font2.setPointSize(10);
        status_4->setFont(font2);
        status_4->setStyleSheet(QString::fromUtf8("#status_4 {\n"
"	color: gray;\n"
"}"));
        progressBar_4 = new QProgressBar(centralwidget);
        progressBar_4->setObjectName(QString::fromUtf8("progressBar_4"));
        progressBar_4->setGeometry(QRect(320, 220, 20, 171));
        progressBar_4->setStyleSheet(QString::fromUtf8("#progressBar_4 {\n"
"    background-color: #1f232a; /* Color de fondo de la barra de progreso */\n"
"    border: 1px solid gray; /* Borde blanco */\n"
"}\n"
"\n"
"#progressBar_4::chunk {\n"
"    background-color: #11316d; /* Nuevo color de la parte de progreso (azul m\303\241s claro) */\n"
"}\n"
"\n"
"#progressBar_4::subcontrol:indicator {\n"
"    subcontrol-position: top; /* Colocar el texto (porcentaje) en la parte superior */\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"#progressBar_4::subcontrol:text {\n"
"    top: 4px; /* Ajustar el texto ligeramente hacia abajo */\n"
"    background-color: transparent; /* Fondo transparente */\n"
"    color: white; /* Color del texto */\n"
"}\n"
""));
        progressBar_4->setMinimum(0);
        progressBar_4->setValue(90);
        progressBar_4->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        progressBar_4->setTextVisible(false);
        progressBar_4->setOrientation(Qt::Vertical);
        progressBar_4->setInvertedAppearance(false);
        progressBar_4->setTextDirection(QProgressBar::TopToBottom);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(360, 270, 171, 121));
        status_3 = new QLabel(widget);
        status_3->setObjectName(QString::fromUtf8("status_3"));
        status_3->setGeometry(QRect(10, 10, 171, 61));
        status_3->setFont(font2);
        status_3->setStyleSheet(QString::fromUtf8("#status_3 {\n"
"	color: gray;\n"
"}"));
        Voltaje = new QTextBrowser(widget);
        Voltaje->setObjectName(QString::fromUtf8("Voltaje"));
        Voltaje->setGeometry(QRect(110, 50, 51, 51));
        Voltaje->setLayoutDirection(Qt::RightToLeft);
        Voltaje->setStyleSheet(QString::fromUtf8("  background-color:#1f232a;"));
        progressBar_2 = new QProgressBar(widget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setEnabled(true);
        progressBar_2->setGeometry(QRect(10, 60, 16, 31));
        progressBar_2->setStyleSheet(QString::fromUtf8("#progressBar_2 {\n"
"    background-color: #1f232a; /* Color de fondo de la barra de progreso */\n"
"    border: 1px solid gray; /* Borde blanco */\n"
"}\n"
"\n"
"#progressBar_2::chunk {\n"
"    background-color: #3498db; /* Cambiar el color de la parte de progreso a azul */\n"
"}\n"
"\n"
"#progressBar_2::subcontrol:indicator {\n"
"    subcontrol-position: top; /* Colocar el texto (porcentaje) en la parte superior */\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"#progressBar_2::subcontrol:text {\n"
"    top: 4px; /* Ajustar el texto ligeramente hacia abajo */\n"
"    background-color: transparent; /* Fondo transparente */\n"
"    color: white; /* Color del texto */\n"
"}\n"
"\n"
""));
        progressBar_2->setMinimum(0);
        progressBar_2->setValue(100);
        progressBar_2->setTextVisible(false);
        progressBar_2->setOrientation(Qt::Vertical);
        progressBar_2->setInvertedAppearance(false);
        progressBar_2->setTextDirection(QProgressBar::BottomToTop);
        VoltajeEntrada = new QLCDNumber(widget);
        VoltajeEntrada->setObjectName(QString::fromUtf8("VoltajeEntrada"));
        VoltajeEntrada->setGeometry(QRect(33, 60, 71, 31));
        VoltajeEntrada->setLayoutDirection(Qt::LeftToRight);
        VoltajeEntrada->setProperty("value", QVariant(4.068000000000000));
        capacity = new QWidget(centralwidget);
        capacity->setObjectName(QString::fromUtf8("capacity"));
        capacity->setGeometry(QRect(360, 210, 191, 81));
        status_2 = new QLabel(capacity);
        status_2->setObjectName(QString::fromUtf8("status_2"));
        status_2->setGeometry(QRect(10, 10, 81, 31));
        status_2->setFont(font2);
        status_2->setStyleSheet(QString::fromUtf8("#status_2 {\n"
"	color: gray;\n"
"}"));
        VoltajeEntrada_2 = new QLCDNumber(capacity);
        VoltajeEntrada_2->setObjectName(QString::fromUtf8("VoltajeEntrada_2"));
        VoltajeEntrada_2->setGeometry(QRect(30, 40, 71, 41));
        VoltajeEntrada_2->setLayoutDirection(Qt::LeftToRight);
        VoltajeEntrada_2->setProperty("value", QVariant(2.107000000000000));
        Ah = new QTextBrowser(capacity);
        Ah->setObjectName(QString::fromUtf8("Ah"));
        Ah->setGeometry(QRect(110, 40, 71, 51));
        QFont font3;
        font3.setPointSize(12);
        Ah->setFont(font3);
        Ah->setLayoutDirection(Qt::RightToLeft);
        Ah->setStyleSheet(QString::fromUtf8("  background-color:#1f232a;"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(350, 150, 211, 80));
        status = new QLabel(widget_2);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(20, 0, 81, 31));
        status->setFont(font2);
        status->setStyleSheet(QString::fromUtf8("#status {\n"
"	color: gray;\n"
"}"));
        textBrowser = new QTextBrowser(widget_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 30, 171, 41));
        textBrowser->setStyleSheet(QString::fromUtf8("  background-color:#1f232a;"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(360, 370, 181, 80));
        textBrowser_2 = new QTextBrowser(widget_3);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(110, 40, 51, 51));
        textBrowser_2->setStyleSheet(QString::fromUtf8("  background-color:#1f232a;"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 161, 41));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("#label {\n"
"	color: gray;\n"
"}"));
        lcdNumber = new QLCDNumber(widget_3);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(30, 50, 71, 31));
        lcdNumber->setProperty("value", QVariant(0.062000000000000));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(550, 270, 171, 121));
        status_7 = new QLabel(widget_4);
        status_7->setObjectName(QString::fromUtf8("status_7"));
        status_7->setGeometry(QRect(10, 10, 171, 61));
        status_7->setFont(font2);
        status_7->setStyleSheet(QString::fromUtf8("#status_7 {\n"
"	color: gray;\n"
"}"));
        Voltaje_3 = new QTextBrowser(widget_4);
        Voltaje_3->setObjectName(QString::fromUtf8("Voltaje_3"));
        Voltaje_3->setGeometry(QRect(110, 50, 51, 51));
        Voltaje_3->setLayoutDirection(Qt::RightToLeft);
        Voltaje_3->setStyleSheet(QString::fromUtf8("  background-color:#1f232a;"));
        progressBar_6 = new QProgressBar(widget_4);
        progressBar_6->setObjectName(QString::fromUtf8("progressBar_6"));
        progressBar_6->setEnabled(true);
        progressBar_6->setGeometry(QRect(10, 60, 16, 31));
        progressBar_6->setStyleSheet(QString::fromUtf8("#progressBar_6 {\n"
"    background-color: #1f232a; /* Color de fondo de la barra de progreso */\n"
"    border: 1px solid gray; /* Borde blanco */\n"
"}\n"
"\n"
"#progressBar_6::chunk {\n"
"    background-color: #11316d; /* Nuevo color de la parte de progreso (azul m\303\241s claro) */\n"
"}\n"
"\n"
"#progressBar_6::subcontrol:indicator {\n"
"    subcontrol-position: top; /* Colocar el texto (porcentaje) en la parte superior */\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"#progressBar_6::subcontrol:text {\n"
"    top: 4px; /* Ajustar el texto ligeramente hacia abajo */\n"
"    background-color: transparent; /* Fondo transparente */\n"
"    color: white; /* Color del texto */\n"
"}\n"
"\n"
""));
        progressBar_6->setMinimum(0);
        progressBar_6->setValue(100);
        progressBar_6->setTextVisible(false);
        progressBar_6->setOrientation(Qt::Vertical);
        progressBar_6->setInvertedAppearance(false);
        progressBar_6->setTextDirection(QProgressBar::BottomToTop);
        VoltajeEntrada_4 = new QLCDNumber(widget_4);
        VoltajeEntrada_4->setObjectName(QString::fromUtf8("VoltajeEntrada_4"));
        VoltajeEntrada_4->setGeometry(QRect(33, 60, 71, 31));
        VoltajeEntrada_4->setLayoutDirection(Qt::LeftToRight);
        VoltajeEntrada_4->setProperty("value", QVariant(4.067000000000000));
        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(550, 370, 181, 80));
        textBrowser_3 = new QTextBrowser(widget_5);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(110, 40, 51, 51));
        textBrowser_3->setStyleSheet(QString::fromUtf8("  background-color:#1f232a;"));
        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 161, 41));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"	color: gray;\n"
"}"));
        lcdNumber_2 = new QLCDNumber(widget_5);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(30, 50, 71, 31));
        lcdNumber_2->setProperty("value", QVariant(0.184000000000000));
        columnView_3 = new QColumnView(centralwidget);
        columnView_3->setObjectName(QString::fromUtf8("columnView_3"));
        columnView_3->setGeometry(QRect(720, 140, 211, 331));
        columnView_3->setStyleSheet(QString::fromUtf8("#columnView_3{ \n"
"  border: 1px solid gray; /* Borde blanco */\n"
"  background-color: #1f232a;\n"
"}"));
        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(700, 150, 241, 80));
        model = new QLabel(widget_6);
        model->setObjectName(QString::fromUtf8("model"));
        model->setGeometry(QRect(30, 30, 191, 51));
        model->setMaximumSize(QSize(300, 100));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Roboto Black"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        model->setFont(font4);
        model->setStyleSheet(QString::fromUtf8("#model{\n"
"    background-color: #888888; /* Cambiar el color de fondo del cuadro a un gris m\303\241s oscuro */\n"
"    color:white; /* Color del texto negro */\n"
"    border: 1px solid #666666; /* Borde del cuadro */\n"
"    border-radius: 7px; /* Bordes redondeados */\n"
"    padding: 4px; /* Espacio interno */\n"
"}\n"
""));
        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 47, 13));
        label_3->setFont(font2);
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(700, 250, 231, 91));
        model_2 = new QLabel(widget_7);
        model_2->setObjectName(QString::fromUtf8("model_2"));
        model_2->setGeometry(QRect(30, 20, 191, 51));
        model_2->setMaximumSize(QSize(300, 100));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Roboto Black"));
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setWeight(75);
        model_2->setFont(font5);
        model_2->setStyleSheet(QString::fromUtf8("#model_2{\n"
"    background-color: #888888; /* Cambiar el color de fondo del cuadro a un gris m\303\241s oscuro */\n"
"    color:white; /* Color del texto negro */\n"
"    border: 1px solid #666666; /* Borde del cuadro */\n"
"    border-radius: 7px; /* Bordes redondeados */\n"
"    padding: 4px; /* Espacio interno */\n"
"}\n"
""));
        model_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 0, 101, 20));
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 100, 271, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial Black"));
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setWeight(75);
        label_5->setFont(font6);
        label_5->setAlignment(Qt::AlignCenter);
        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(710, 340, 221, 81));
        label_6 = new QLabel(widget_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 0, 101, 20));
        label_6->setFont(font2);
        model_3 = new QLabel(widget_8);
        model_3->setObjectName(QString::fromUtf8("model_3"));
        model_3->setGeometry(QRect(20, 20, 191, 51));
        model_3->setMaximumSize(QSize(300, 100));
        model_3->setFont(font5);
        model_3->setStyleSheet(QString::fromUtf8("#model_3{\n"
"    background-color: #888888; /* Cambiar el color de fondo del cuadro a un gris m\303\241s oscuro */\n"
"    color:white; /* Color del texto negro */\n"
"    border: 1px solid #666666; /* Borde del cuadro */\n"
"    border-radius: 7px; /* Bordes redondeados */\n"
"    padding: 4px; /* Espacio interno */\n"
"}\n"
""));
        model_3->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(false);
        label_7->setGeometry(QRect(640, 180, 41, 41));
        label_7->setStyleSheet(QString::fromUtf8("#label {\n"
"color: rgb(255, 255, 255);}"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/battery-charging.svg")));
        label_7->setScaledContents(true);
        mainBodyContainer = new QWidget(centralwidget);
        mainBodyContainer->setObjectName(QString::fromUtf8("mainBodyContainer"));
        mainBodyContainer->setGeometry(QRect(510, 490, 120, 80));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainBodyContainer->sizePolicy().hasHeightForWidth());
        mainBodyContainer->setSizePolicy(sizePolicy1);
        widget_9 = new QWidget(centralwidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(170, 490, 120, 80));
        MainWindow->setCentralWidget(centralwidget);
        columnView_3->raise();
        status_5->raise();
        columnView_2->raise();
        LeftMenuContainer->raise();
        Linxlogo->raise();
        Bateria->raise();
        Batterylevel->raise();
        Bateria1->raise();
        line->raise();
        progressBar_3->raise();
        status_4->raise();
        progressBar_4->raise();
        widget->raise();
        capacity->raise();
        widget_2->raise();
        widget_3->raise();
        widget_4->raise();
        widget_5->raise();
        widget_6->raise();
        widget_7->raise();
        label_5->raise();
        widget_8->raise();
        label_7->raise();
        mainBodyContainer->raise();
        widget_9->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        menuBtn->setToolTip(QCoreApplication::translate("MainWindow", "Menu", nullptr));
#endif // QT_CONFIG(tooltip)
        menuBtn->setText(QString());
#if QT_CONFIG(tooltip)
        homeBtn->setToolTip(QCoreApplication::translate("MainWindow", "Home", nullptr));
#endif // QT_CONFIG(tooltip)
        homeBtn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
#if QT_CONFIG(tooltip)
        dataBtn->setToolTip(QCoreApplication::translate("MainWindow", "Data Analysis", nullptr));
#endif // QT_CONFIG(tooltip)
        dataBtn->setText(QCoreApplication::translate("MainWindow", "Data Analysis", nullptr));
#if QT_CONFIG(tooltip)
        infoBtn->setToolTip(QCoreApplication::translate("MainWindow", "Information about the app", nullptr));
#endif // QT_CONFIG(tooltip)
        infoBtn->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
#if QT_CONFIG(tooltip)
        reportBtn->setToolTip(QCoreApplication::translate("MainWindow", "View Reports", nullptr));
#endif // QT_CONFIG(tooltip)
        reportBtn->setText(QCoreApplication::translate("MainWindow", "Reports", nullptr));
#if QT_CONFIG(tooltip)
        settingsBtn->setToolTip(QCoreApplication::translate("MainWindow", "Go to settings", nullptr));
#endif // QT_CONFIG(tooltip)
        settingsBtn->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        helpBtn->setToolTip(QCoreApplication::translate("MainWindow", "Get more help", nullptr));
#endif // QT_CONFIG(tooltip)
        helpBtn->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        Linxlogo->setText(QString());
        Bateria->setText(QString());
        Batterylevel->setFormat(QCoreApplication::translate("MainWindow", "%p.7%", nullptr));
        Bateria1->setText(QCoreApplication::translate("MainWindow", "Set SOC", nullptr));
        status_4->setText(QCoreApplication::translate("MainWindow", "State of charge:", nullptr));
        status_3->setText(QCoreApplication::translate("MainWindow", "Open Circuit Voltage (OCV):", nullptr));
        Voltaje->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">V</span></p></body></html>", nullptr));
        status_2->setText(QCoreApplication::translate("MainWindow", "Capacity:", nullptr));
        Ah->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt; color:#ffffff;\">Ah</span></p></body></html>", nullptr));
        status->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#f4f4f4;\">Discharging</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\316\251</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Internal Resistence (ESR):", nullptr));
        status_7->setText(QCoreApplication::translate("MainWindow", "Terminal  Voltage (Vt):", nullptr));
        Voltaje_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">V</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">A</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Current:", nullptr));
        model->setText(QCoreApplication::translate("MainWindow", "/int/battery/default/Lilon.cvs", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Model:", nullptr));
        model_2->setText(QCoreApplication::translate("MainWindow", "3.100 Ah", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Battery Capacity:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Battery bank interface", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Current Limit:", nullptr));
        model_3->setText(QCoreApplication::translate("MainWindow", "1000 00 A", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INTERFACEAUQIDI_H
