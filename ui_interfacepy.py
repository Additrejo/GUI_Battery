# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'interfaceaeejlx.ui'
##
## Created by: Qt User Interface Compiler version 5.15.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide2.QtCore import *
from PySide2.QtGui import *
from PySide2.QtWidgets import *

import resources_rc
import Imagenes_rc
import resources_rc

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(953, 592)
        MainWindow.setStyleSheet(u"*{\n"
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
"")
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        palette = QPalette()
        brush = QBrush(QColor(255, 255, 255, 255))
        brush.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.WindowText, brush)
        brush1 = QBrush(QColor(31, 35, 42, 255))
        brush1.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Button, brush1)
        palette.setBrush(QPalette.Active, QPalette.Light, brush)
        palette.setBrush(QPalette.Active, QPalette.Midlight, brush)
        brush2 = QBrush(QColor(127, 127, 127, 255))
        brush2.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Dark, brush2)
        brush3 = QBrush(QColor(170, 170, 170, 255))
        brush3.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Mid, brush3)
        palette.setBrush(QPalette.Active, QPalette.Text, brush)
        palette.setBrush(QPalette.Active, QPalette.BrightText, brush)
        palette.setBrush(QPalette.Active, QPalette.ButtonText, brush)
        palette.setBrush(QPalette.Active, QPalette.Base, brush1)
        palette.setBrush(QPalette.Active, QPalette.Window, brush1)
        brush4 = QBrush(QColor(0, 0, 0, 255))
        brush4.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Shadow, brush4)
        palette.setBrush(QPalette.Active, QPalette.AlternateBase, brush)
        brush5 = QBrush(QColor(255, 255, 220, 255))
        brush5.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.ToolTipBase, brush5)
        palette.setBrush(QPalette.Active, QPalette.ToolTipText, brush4)
        brush6 = QBrush(QColor(0, 0, 0, 128))
        brush6.setStyle(Qt.SolidPattern)
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette.Active, QPalette.PlaceholderText, brush6)
#endif
        palette.setBrush(QPalette.Inactive, QPalette.WindowText, brush)
        palette.setBrush(QPalette.Inactive, QPalette.Button, brush1)
        palette.setBrush(QPalette.Inactive, QPalette.Light, brush)
        palette.setBrush(QPalette.Inactive, QPalette.Midlight, brush)
        palette.setBrush(QPalette.Inactive, QPalette.Dark, brush2)
        palette.setBrush(QPalette.Inactive, QPalette.Mid, brush3)
        palette.setBrush(QPalette.Inactive, QPalette.Text, brush)
        palette.setBrush(QPalette.Inactive, QPalette.BrightText, brush)
        palette.setBrush(QPalette.Inactive, QPalette.ButtonText, brush)
        palette.setBrush(QPalette.Inactive, QPalette.Base, brush1)
        palette.setBrush(QPalette.Inactive, QPalette.Window, brush1)
        palette.setBrush(QPalette.Inactive, QPalette.Shadow, brush4)
        palette.setBrush(QPalette.Inactive, QPalette.AlternateBase, brush)
        palette.setBrush(QPalette.Inactive, QPalette.ToolTipBase, brush5)
        palette.setBrush(QPalette.Inactive, QPalette.ToolTipText, brush4)
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette.Inactive, QPalette.PlaceholderText, brush6)
#endif
        palette.setBrush(QPalette.Disabled, QPalette.WindowText, brush)
        palette.setBrush(QPalette.Disabled, QPalette.Button, brush1)
        palette.setBrush(QPalette.Disabled, QPalette.Light, brush)
        palette.setBrush(QPalette.Disabled, QPalette.Midlight, brush)
        palette.setBrush(QPalette.Disabled, QPalette.Dark, brush2)
        palette.setBrush(QPalette.Disabled, QPalette.Mid, brush3)
        palette.setBrush(QPalette.Disabled, QPalette.Text, brush)
        palette.setBrush(QPalette.Disabled, QPalette.BrightText, brush)
        palette.setBrush(QPalette.Disabled, QPalette.ButtonText, brush)
        palette.setBrush(QPalette.Disabled, QPalette.Base, brush1)
        palette.setBrush(QPalette.Disabled, QPalette.Window, brush1)
        palette.setBrush(QPalette.Disabled, QPalette.Shadow, brush4)
        palette.setBrush(QPalette.Disabled, QPalette.AlternateBase, brush)
        palette.setBrush(QPalette.Disabled, QPalette.ToolTipBase, brush5)
        palette.setBrush(QPalette.Disabled, QPalette.ToolTipText, brush4)
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette.Disabled, QPalette.PlaceholderText, brush6)
#endif
        self.centralwidget.setPalette(palette)
        self.centralwidget.setMouseTracking(False)
        self.centralwidget.setTabletTracking(False)
        self.LeftMenuContainer = QWidget(self.centralwidget)
        self.LeftMenuContainer.setObjectName(u"LeftMenuContainer")
        self.LeftMenuContainer.setEnabled(True)
        self.LeftMenuContainer.setGeometry(QRect(0, 0, 141, 591))
        self.horizontalLayout_2 = QHBoxLayout(self.LeftMenuContainer)
        self.horizontalLayout_2.setSpacing(0)
        self.horizontalLayout_2.setObjectName(u"horizontalLayout_2")
        self.horizontalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.leftMenuSubContainer = QWidget(self.LeftMenuContainer)
        self.leftMenuSubContainer.setObjectName(u"leftMenuSubContainer")
        self.leftMenuSubContainer.setStyleSheet(u"background-color: rgb(52, 52, 52);")
        self.verticalLayout_2 = QVBoxLayout(self.leftMenuSubContainer)
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.frame = QFrame(self.leftMenuSubContainer)
        self.frame.setObjectName(u"frame")
        self.frame.setLayoutDirection(Qt.LeftToRight)
        self.frame.setStyleSheet(u"#menuBtn {\n"
"color: rgb(255, 255, 255);}")
        self.frame.setFrameShape(QFrame.StyledPanel)
        self.frame.setFrameShadow(QFrame.Raised)
        self.horizontalLayout = QHBoxLayout(self.frame)
        self.horizontalLayout.setSpacing(0)
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.menuBtn = QPushButton(self.frame)
        self.menuBtn.setObjectName(u"menuBtn")
        self.menuBtn.setEnabled(True)
        self.menuBtn.setLayoutDirection(Qt.LeftToRight)
        self.menuBtn.setStyleSheet(u"")
        icon = QIcon()
        icon.addFile(u":/icons/icons/align-justify.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.menuBtn.setIcon(icon)
        self.menuBtn.setIconSize(QSize(24, 24))

        self.horizontalLayout.addWidget(self.menuBtn, 0, Qt.AlignVCenter)


        self.verticalLayout_2.addWidget(self.frame, 0, Qt.AlignTop)

        self.frame_2 = QFrame(self.leftMenuSubContainer)
        self.frame_2.setObjectName(u"frame_2")
        self.frame_2.setEnabled(True)
        self.frame_2.setFrameShape(QFrame.StyledPanel)
        self.frame_2.setFrameShadow(QFrame.Raised)
        self.verticalLayout_4 = QVBoxLayout(self.frame_2)
        self.verticalLayout_4.setSpacing(0)
        self.verticalLayout_4.setObjectName(u"verticalLayout_4")
        self.verticalLayout_4.setContentsMargins(0, 10, 0, 10)
        self.homeBtn = QPushButton(self.frame_2)
        self.homeBtn.setObjectName(u"homeBtn")
        self.homeBtn.setEnabled(True)
        self.homeBtn.setStyleSheet(u"background-color: #1f232a;")
        icon1 = QIcon()
        icon1.addFile(u":/icons/icons/home.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.homeBtn.setIcon(icon1)
        self.homeBtn.setIconSize(QSize(24, 24))

        self.verticalLayout_4.addWidget(self.homeBtn)

        self.dataBtn = QPushButton(self.frame_2)
        self.dataBtn.setObjectName(u"dataBtn")
        icon2 = QIcon()
        icon2.addFile(u":/icons/icons/activity.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.dataBtn.setIcon(icon2)
        self.dataBtn.setIconSize(QSize(24, 24))

        self.verticalLayout_4.addWidget(self.dataBtn, 0, Qt.AlignTop)


        self.verticalLayout_2.addWidget(self.frame_2, 0, Qt.AlignLeft)

        self.frame_3 = QFrame(self.leftMenuSubContainer)
        self.frame_3.setObjectName(u"frame_3")
        sizePolicy = QSizePolicy(QSizePolicy.Preferred, QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.frame_3.sizePolicy().hasHeightForWidth())
        self.frame_3.setSizePolicy(sizePolicy)
        self.frame_3.setFrameShape(QFrame.StyledPanel)
        self.frame_3.setFrameShadow(QFrame.Raised)
        self.verticalLayout_3 = QVBoxLayout(self.frame_3)
        self.verticalLayout_3.setSpacing(0)
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.verticalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.infoBtn = QPushButton(self.frame_3)
        self.infoBtn.setObjectName(u"infoBtn")
        icon3 = QIcon()
        icon3.addFile(u":/icons/icons/info.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.infoBtn.setIcon(icon3)
        self.infoBtn.setIconSize(QSize(24, 24))

        self.verticalLayout_3.addWidget(self.infoBtn)

        self.reportBtn = QPushButton(self.frame_3)
        self.reportBtn.setObjectName(u"reportBtn")
        self.reportBtn.setEnabled(True)
        icon4 = QIcon()
        icon4.addFile(u":/icons/icons/printer.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.reportBtn.setIcon(icon4)
        self.reportBtn.setIconSize(QSize(24, 24))

        self.verticalLayout_3.addWidget(self.reportBtn)

        self.settingsBtn = QPushButton(self.frame_3)
        self.settingsBtn.setObjectName(u"settingsBtn")
        icon5 = QIcon()
        icon5.addFile(u":/icons/icons/settings.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.settingsBtn.setIcon(icon5)
        self.settingsBtn.setIconSize(QSize(24, 24))

        self.verticalLayout_3.addWidget(self.settingsBtn)

        self.helpBtn = QPushButton(self.frame_3)
        self.helpBtn.setObjectName(u"helpBtn")
        icon6 = QIcon()
        icon6.addFile(u":/icons/icons/help-circle.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.helpBtn.setIcon(icon6)
        self.helpBtn.setIconSize(QSize(24, 24))

        self.verticalLayout_3.addWidget(self.helpBtn)


        self.verticalLayout_2.addWidget(self.frame_3)


        self.horizontalLayout_2.addWidget(self.leftMenuSubContainer)

        self.Linxlogo = QLabel(self.centralwidget)
        self.Linxlogo.setObjectName(u"Linxlogo")
        self.Linxlogo.setGeometry(QRect(450, 20, 191, 61))
        self.Linxlogo.setPixmap(QPixmap(u":/Linx/LINX-Negro.png"))
        self.Linxlogo.setScaledContents(True)
        self.Bateria = QLabel(self.centralwidget)
        self.Bateria.setObjectName(u"Bateria")
        self.Bateria.setGeometry(QRect(180, 190, 81, 211))
        self.Bateria.setPixmap(QPixmap(u":/Bater\u00eda/bater\u00e1 sola.png"))
        self.Bateria.setScaledContents(True)
        self.Batterylevel = QProgressBar(self.centralwidget)
        self.Batterylevel.setObjectName(u"Batterylevel")
        self.Batterylevel.setGeometry(QRect(180, 220, 81, 171))
        font = QFont()
        font.setPointSize(20)
        self.Batterylevel.setFont(font)
        self.Batterylevel.setStyleSheet(u"#Batterylevel {\n"
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
"")
        self.Batterylevel.setMinimum(0)
        self.Batterylevel.setValue(60)
        self.Batterylevel.setAlignment(Qt.AlignCenter)
        self.Batterylevel.setTextVisible(True)
        self.Batterylevel.setOrientation(Qt.Vertical)
        self.Batterylevel.setInvertedAppearance(False)
        self.Batterylevel.setTextDirection(QProgressBar.TopToBottom)
        self.Bateria1 = QLabel(self.centralwidget)
        self.Bateria1.setObjectName(u"Bateria1")
        self.Bateria1.setGeometry(QRect(180, 410, 100, 51))
        self.Bateria1.setMaximumSize(QSize(100, 100))
        font1 = QFont()
        font1.setFamily(u"Roboto Black")
        font1.setPointSize(17)
        font1.setBold(True)
        font1.setWeight(75)
        self.Bateria1.setFont(font1)
        self.Bateria1.setStyleSheet(u"#Bateria1 {\n"
"    background-color: #888888; /* Cambiar el color de fondo del cuadro a un gris m\u00e1s oscuro */\n"
"    color: black; /* Color del texto negro */\n"
"    border: 1px solid #666666; /* Borde del cuadro */\n"
"    border-radius: 7px; /* Bordes redondeados */\n"
"    padding: 4px; /* Espacio interno */\n"
"}\n"
"")
        self.line = QFrame(self.centralwidget)
        self.line.setObjectName(u"line")
        self.line.setGeometry(QRect(400, 130, 3, 61))
        self.line.setFrameShape(QFrame.VLine)
        self.line.setFrameShadow(QFrame.Sunken)
        self.status_5 = QColumnView(self.centralwidget)
        self.status_5.setObjectName(u"status_5")
        self.status_5.setGeometry(QRect(350, 140, 371, 331))
        self.status_5.setStyleSheet(u"#status_5{ \n"
"  border: 1px solid gray; /* Borde blanco */\n"
"  background-color: #1f232a;\n"
"}")
        self.progressBar_3 = QProgressBar(self.centralwidget)
        self.progressBar_3.setObjectName(u"progressBar_3")
        self.progressBar_3.setGeometry(QRect(290, 220, 20, 171))
        self.progressBar_3.setStyleSheet(u"#progressBar_3 {\n"
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
"")
        self.progressBar_3.setMinimum(0)
        self.progressBar_3.setValue(90)
        self.progressBar_3.setAlignment(Qt.AlignJustify|Qt.AlignVCenter)
        self.progressBar_3.setTextVisible(False)
        self.progressBar_3.setOrientation(Qt.Vertical)
        self.progressBar_3.setInvertedAppearance(False)
        self.progressBar_3.setTextDirection(QProgressBar.TopToBottom)
        self.columnView_2 = QColumnView(self.centralwidget)
        self.columnView_2.setObjectName(u"columnView_2")
        self.columnView_2.setGeometry(QRect(170, 140, 181, 331))
        self.columnView_2.setStyleSheet(u"#columnView_2{ \n"
"  border: 1px solid gray; /* Borde blanco */\n"
"  background-color: #1f232a;\n"
"}")
        self.status_4 = QLabel(self.centralwidget)
        self.status_4.setObjectName(u"status_4")
        self.status_4.setGeometry(QRect(180, 140, 111, 31))
        font2 = QFont()
        font2.setPointSize(10)
        self.status_4.setFont(font2)
        self.status_4.setStyleSheet(u"#status_4 {\n"
"	color: gray;\n"
"}")
        self.progressBar_4 = QProgressBar(self.centralwidget)
        self.progressBar_4.setObjectName(u"progressBar_4")
        self.progressBar_4.setGeometry(QRect(320, 220, 20, 171))
        self.progressBar_4.setStyleSheet(u"#progressBar_4 {\n"
"    background-color: #1f232a; /* Color de fondo de la barra de progreso */\n"
"    border: 1px solid gray; /* Borde blanco */\n"
"}\n"
"\n"
"#progressBar_4::chunk {\n"
"    background-color: #11316d; /* Nuevo color de la parte de progreso (azul m\u00e1s claro) */\n"
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
"")
        self.progressBar_4.setMinimum(0)
        self.progressBar_4.setValue(90)
        self.progressBar_4.setAlignment(Qt.AlignJustify|Qt.AlignVCenter)
        self.progressBar_4.setTextVisible(False)
        self.progressBar_4.setOrientation(Qt.Vertical)
        self.progressBar_4.setInvertedAppearance(False)
        self.progressBar_4.setTextDirection(QProgressBar.TopToBottom)
        self.widget = QWidget(self.centralwidget)
        self.widget.setObjectName(u"widget")
        self.widget.setGeometry(QRect(360, 270, 171, 121))
        self.status_3 = QLabel(self.widget)
        self.status_3.setObjectName(u"status_3")
        self.status_3.setGeometry(QRect(10, 10, 171, 61))
        self.status_3.setFont(font2)
        self.status_3.setStyleSheet(u"#status_3 {\n"
"	color: gray;\n"
"}")
        self.Voltaje = QTextBrowser(self.widget)
        self.Voltaje.setObjectName(u"Voltaje")
        self.Voltaje.setGeometry(QRect(110, 50, 51, 51))
        self.Voltaje.setLayoutDirection(Qt.RightToLeft)
        self.Voltaje.setStyleSheet(u"  background-color:#1f232a;")
        self.progressBar_2 = QProgressBar(self.widget)
        self.progressBar_2.setObjectName(u"progressBar_2")
        self.progressBar_2.setEnabled(True)
        self.progressBar_2.setGeometry(QRect(10, 60, 16, 31))
        self.progressBar_2.setStyleSheet(u"#progressBar_2 {\n"
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
"")
        self.progressBar_2.setMinimum(0)
        self.progressBar_2.setValue(100)
        self.progressBar_2.setTextVisible(False)
        self.progressBar_2.setOrientation(Qt.Vertical)
        self.progressBar_2.setInvertedAppearance(False)
        self.progressBar_2.setTextDirection(QProgressBar.BottomToTop)
        self.VoltajeEntrada = QLCDNumber(self.widget)
        self.VoltajeEntrada.setObjectName(u"VoltajeEntrada")
        self.VoltajeEntrada.setGeometry(QRect(33, 60, 71, 31))
        self.VoltajeEntrada.setLayoutDirection(Qt.LeftToRight)
        self.VoltajeEntrada.setProperty("value", 4.068000000000000)
        self.capacity = QWidget(self.centralwidget)
        self.capacity.setObjectName(u"capacity")
        self.capacity.setGeometry(QRect(360, 210, 191, 81))
        self.status_2 = QLabel(self.capacity)
        self.status_2.setObjectName(u"status_2")
        self.status_2.setGeometry(QRect(10, 10, 81, 31))
        self.status_2.setFont(font2)
        self.status_2.setStyleSheet(u"#status_2 {\n"
"	color: gray;\n"
"}")
        self.VoltajeEntrada_2 = QLCDNumber(self.capacity)
        self.VoltajeEntrada_2.setObjectName(u"VoltajeEntrada_2")
        self.VoltajeEntrada_2.setGeometry(QRect(30, 40, 71, 41))
        self.VoltajeEntrada_2.setLayoutDirection(Qt.LeftToRight)
        self.VoltajeEntrada_2.setProperty("value", 2.107000000000000)
        self.Ah = QTextBrowser(self.capacity)
        self.Ah.setObjectName(u"Ah")
        self.Ah.setGeometry(QRect(110, 40, 71, 51))
        font3 = QFont()
        font3.setPointSize(12)
        self.Ah.setFont(font3)
        self.Ah.setLayoutDirection(Qt.RightToLeft)
        self.Ah.setStyleSheet(u"  background-color:#1f232a;")
        self.widget_2 = QWidget(self.centralwidget)
        self.widget_2.setObjectName(u"widget_2")
        self.widget_2.setGeometry(QRect(350, 150, 211, 80))
        self.status = QLabel(self.widget_2)
        self.status.setObjectName(u"status")
        self.status.setGeometry(QRect(20, 0, 81, 31))
        self.status.setFont(font2)
        self.status.setStyleSheet(u"#status {\n"
"	color: gray;\n"
"}")
        self.textBrowser = QTextBrowser(self.widget_2)
        self.textBrowser.setObjectName(u"textBrowser")
        self.textBrowser.setGeometry(QRect(20, 30, 171, 41))
        self.textBrowser.setStyleSheet(u"  background-color:#1f232a;")
        self.widget_3 = QWidget(self.centralwidget)
        self.widget_3.setObjectName(u"widget_3")
        self.widget_3.setGeometry(QRect(360, 370, 181, 80))
        self.textBrowser_2 = QTextBrowser(self.widget_3)
        self.textBrowser_2.setObjectName(u"textBrowser_2")
        self.textBrowser_2.setGeometry(QRect(110, 40, 51, 51))
        self.textBrowser_2.setStyleSheet(u"  background-color:#1f232a;")
        self.label = QLabel(self.widget_3)
        self.label.setObjectName(u"label")
        self.label.setGeometry(QRect(10, 10, 161, 41))
        self.label.setFont(font2)
        self.label.setStyleSheet(u"#label {\n"
"	color: gray;\n"
"}")
        self.lcdNumber = QLCDNumber(self.widget_3)
        self.lcdNumber.setObjectName(u"lcdNumber")
        self.lcdNumber.setGeometry(QRect(30, 50, 71, 31))
        self.lcdNumber.setProperty("value", 0.062000000000000)
        self.widget_4 = QWidget(self.centralwidget)
        self.widget_4.setObjectName(u"widget_4")
        self.widget_4.setGeometry(QRect(550, 270, 171, 121))
        self.status_7 = QLabel(self.widget_4)
        self.status_7.setObjectName(u"status_7")
        self.status_7.setGeometry(QRect(10, 10, 171, 61))
        self.status_7.setFont(font2)
        self.status_7.setStyleSheet(u"#status_7 {\n"
"	color: gray;\n"
"}")
        self.Voltaje_3 = QTextBrowser(self.widget_4)
        self.Voltaje_3.setObjectName(u"Voltaje_3")
        self.Voltaje_3.setGeometry(QRect(110, 50, 51, 51))
        self.Voltaje_3.setLayoutDirection(Qt.RightToLeft)
        self.Voltaje_3.setStyleSheet(u"  background-color:#1f232a;")
        self.progressBar_6 = QProgressBar(self.widget_4)
        self.progressBar_6.setObjectName(u"progressBar_6")
        self.progressBar_6.setEnabled(True)
        self.progressBar_6.setGeometry(QRect(10, 60, 16, 31))
        self.progressBar_6.setStyleSheet(u"#progressBar_6 {\n"
"    background-color: #1f232a; /* Color de fondo de la barra de progreso */\n"
"    border: 1px solid gray; /* Borde blanco */\n"
"}\n"
"\n"
"#progressBar_6::chunk {\n"
"    background-color: #11316d; /* Nuevo color de la parte de progreso (azul m\u00e1s claro) */\n"
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
"")
        self.progressBar_6.setMinimum(0)
        self.progressBar_6.setValue(100)
        self.progressBar_6.setTextVisible(False)
        self.progressBar_6.setOrientation(Qt.Vertical)
        self.progressBar_6.setInvertedAppearance(False)
        self.progressBar_6.setTextDirection(QProgressBar.BottomToTop)
        self.VoltajeEntrada_4 = QLCDNumber(self.widget_4)
        self.VoltajeEntrada_4.setObjectName(u"VoltajeEntrada_4")
        self.VoltajeEntrada_4.setGeometry(QRect(33, 60, 71, 31))
        self.VoltajeEntrada_4.setLayoutDirection(Qt.LeftToRight)
        self.VoltajeEntrada_4.setProperty("value", 4.067000000000000)
        self.widget_5 = QWidget(self.centralwidget)
        self.widget_5.setObjectName(u"widget_5")
        self.widget_5.setGeometry(QRect(550, 370, 181, 80))
        self.textBrowser_3 = QTextBrowser(self.widget_5)
        self.textBrowser_3.setObjectName(u"textBrowser_3")
        self.textBrowser_3.setGeometry(QRect(110, 40, 51, 51))
        self.textBrowser_3.setStyleSheet(u"  background-color:#1f232a;")
        self.label_2 = QLabel(self.widget_5)
        self.label_2.setObjectName(u"label_2")
        self.label_2.setGeometry(QRect(10, 10, 161, 41))
        self.label_2.setFont(font2)
        self.label_2.setStyleSheet(u"#label_2{\n"
"	color: gray;\n"
"}")
        self.lcdNumber_2 = QLCDNumber(self.widget_5)
        self.lcdNumber_2.setObjectName(u"lcdNumber_2")
        self.lcdNumber_2.setGeometry(QRect(30, 50, 71, 31))
        self.lcdNumber_2.setProperty("value", 0.184000000000000)
        self.columnView_3 = QColumnView(self.centralwidget)
        self.columnView_3.setObjectName(u"columnView_3")
        self.columnView_3.setGeometry(QRect(720, 140, 211, 331))
        self.columnView_3.setStyleSheet(u"#columnView_3{ \n"
"  border: 1px solid gray; /* Borde blanco */\n"
"  background-color: #1f232a;\n"
"}")
        self.widget_6 = QWidget(self.centralwidget)
        self.widget_6.setObjectName(u"widget_6")
        self.widget_6.setGeometry(QRect(700, 150, 241, 80))
        self.model = QLabel(self.widget_6)
        self.model.setObjectName(u"model")
        self.model.setGeometry(QRect(30, 30, 191, 51))
        self.model.setMaximumSize(QSize(300, 100))
        font4 = QFont()
        font4.setFamily(u"Roboto Black")
        font4.setPointSize(10)
        font4.setBold(True)
        font4.setWeight(75)
        self.model.setFont(font4)
        self.model.setStyleSheet(u"#model{\n"
"    background-color: #888888; /* Cambiar el color de fondo del cuadro a un gris m\u00e1s oscuro */\n"
"    color:white; /* Color del texto negro */\n"
"    border: 1px solid #666666; /* Borde del cuadro */\n"
"    border-radius: 7px; /* Bordes redondeados */\n"
"    padding: 4px; /* Espacio interno */\n"
"}\n"
"")
        self.label_3 = QLabel(self.widget_6)
        self.label_3.setObjectName(u"label_3")
        self.label_3.setGeometry(QRect(30, 10, 47, 13))
        self.label_3.setFont(font2)
        self.widget_7 = QWidget(self.centralwidget)
        self.widget_7.setObjectName(u"widget_7")
        self.widget_7.setGeometry(QRect(700, 250, 231, 91))
        self.model_2 = QLabel(self.widget_7)
        self.model_2.setObjectName(u"model_2")
        self.model_2.setGeometry(QRect(30, 20, 191, 51))
        self.model_2.setMaximumSize(QSize(300, 100))
        font5 = QFont()
        font5.setFamily(u"Roboto Black")
        font5.setPointSize(20)
        font5.setBold(True)
        font5.setWeight(75)
        self.model_2.setFont(font5)
        self.model_2.setStyleSheet(u"#model_2{\n"
"    background-color: #888888; /* Cambiar el color de fondo del cuadro a un gris m\u00e1s oscuro */\n"
"    color:white; /* Color del texto negro */\n"
"    border: 1px solid #666666; /* Borde del cuadro */\n"
"    border-radius: 7px; /* Bordes redondeados */\n"
"    padding: 4px; /* Espacio interno */\n"
"}\n"
"")
        self.model_2.setAlignment(Qt.AlignCenter)
        self.label_4 = QLabel(self.widget_7)
        self.label_4.setObjectName(u"label_4")
        self.label_4.setGeometry(QRect(30, 0, 101, 20))
        self.label_4.setFont(font2)
        self.label_5 = QLabel(self.centralwidget)
        self.label_5.setObjectName(u"label_5")
        self.label_5.setGeometry(QRect(400, 100, 271, 20))
        font6 = QFont()
        font6.setFamily(u"Arial Black")
        font6.setPointSize(15)
        font6.setBold(True)
        font6.setWeight(75)
        self.label_5.setFont(font6)
        self.label_5.setAlignment(Qt.AlignCenter)
        self.widget_8 = QWidget(self.centralwidget)
        self.widget_8.setObjectName(u"widget_8")
        self.widget_8.setGeometry(QRect(710, 340, 221, 81))
        self.label_6 = QLabel(self.widget_8)
        self.label_6.setObjectName(u"label_6")
        self.label_6.setGeometry(QRect(20, 0, 101, 20))
        self.label_6.setFont(font2)
        self.model_3 = QLabel(self.widget_8)
        self.model_3.setObjectName(u"model_3")
        self.model_3.setGeometry(QRect(20, 20, 191, 51))
        self.model_3.setMaximumSize(QSize(300, 100))
        self.model_3.setFont(font5)
        self.model_3.setStyleSheet(u"#model_3{\n"
"    background-color: #888888; /* Cambiar el color de fondo del cuadro a un gris m\u00e1s oscuro */\n"
"    color:white; /* Color del texto negro */\n"
"    border: 1px solid #666666; /* Borde del cuadro */\n"
"    border-radius: 7px; /* Bordes redondeados */\n"
"    padding: 4px; /* Espacio interno */\n"
"}\n"
"")
        self.model_3.setAlignment(Qt.AlignCenter)
        self.label_7 = QLabel(self.centralwidget)
        self.label_7.setObjectName(u"label_7")
        self.label_7.setEnabled(False)
        self.label_7.setGeometry(QRect(640, 180, 41, 41))
        self.label_7.setStyleSheet(u"#label {\n"
"color: rgb(255, 255, 255);}")
        self.label_7.setPixmap(QPixmap(u":/icons/icons/battery-charging.svg"))
        self.label_7.setScaledContents(True)
        self.mainBodyContainer = QWidget(self.centralwidget)
        self.mainBodyContainer.setObjectName(u"mainBodyContainer")
        self.mainBodyContainer.setGeometry(QRect(510, 490, 120, 80))
        sizePolicy1 = QSizePolicy(QSizePolicy.Expanding, QSizePolicy.Preferred)
        sizePolicy1.setHorizontalStretch(0)
        sizePolicy1.setVerticalStretch(0)
        sizePolicy1.setHeightForWidth(self.mainBodyContainer.sizePolicy().hasHeightForWidth())
        self.mainBodyContainer.setSizePolicy(sizePolicy1)
        self.widget_9 = QWidget(self.centralwidget)
        self.widget_9.setObjectName(u"widget_9")
        self.widget_9.setGeometry(QRect(170, 490, 120, 80))
        MainWindow.setCentralWidget(self.centralwidget)
        self.columnView_3.raise_()
        self.status_5.raise_()
        self.columnView_2.raise_()
        self.LeftMenuContainer.raise_()
        self.Linxlogo.raise_()
        self.Bateria.raise_()
        self.Batterylevel.raise_()
        self.Bateria1.raise_()
        self.line.raise_()
        self.progressBar_3.raise_()
        self.status_4.raise_()
        self.progressBar_4.raise_()
        self.widget.raise_()
        self.capacity.raise_()
        self.widget_2.raise_()
        self.widget_3.raise_()
        self.widget_4.raise_()
        self.widget_5.raise_()
        self.widget_6.raise_()
        self.widget_7.raise_()
        self.label_5.raise_()
        self.widget_8.raise_()
        self.label_7.raise_()
        self.mainBodyContainer.raise_()
        self.widget_9.raise_()

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"MainWindow", None))
#if QT_CONFIG(accessibility)
        MainWindow.setAccessibleName("")
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        self.menuBtn.setToolTip(QCoreApplication.translate("MainWindow", u"Menu", None))
#endif // QT_CONFIG(tooltip)
        self.menuBtn.setText("")
#if QT_CONFIG(tooltip)
        self.homeBtn.setToolTip(QCoreApplication.translate("MainWindow", u"Home", None))
#endif // QT_CONFIG(tooltip)
        self.homeBtn.setText(QCoreApplication.translate("MainWindow", u"Home", None))
#if QT_CONFIG(tooltip)
        self.dataBtn.setToolTip(QCoreApplication.translate("MainWindow", u"Data Analysis", None))
#endif // QT_CONFIG(tooltip)
        self.dataBtn.setText(QCoreApplication.translate("MainWindow", u"Data Analysis", None))
#if QT_CONFIG(tooltip)
        self.infoBtn.setToolTip(QCoreApplication.translate("MainWindow", u"Information about the app", None))
#endif // QT_CONFIG(tooltip)
        self.infoBtn.setText(QCoreApplication.translate("MainWindow", u"Information", None))
#if QT_CONFIG(tooltip)
        self.reportBtn.setToolTip(QCoreApplication.translate("MainWindow", u"View Reports", None))
#endif // QT_CONFIG(tooltip)
        self.reportBtn.setText(QCoreApplication.translate("MainWindow", u"Reports", None))
#if QT_CONFIG(tooltip)
        self.settingsBtn.setToolTip(QCoreApplication.translate("MainWindow", u"Go to settings", None))
#endif // QT_CONFIG(tooltip)
        self.settingsBtn.setText(QCoreApplication.translate("MainWindow", u"Settings", None))
#if QT_CONFIG(tooltip)
        self.helpBtn.setToolTip(QCoreApplication.translate("MainWindow", u"Get more help", None))
#endif // QT_CONFIG(tooltip)
        self.helpBtn.setText(QCoreApplication.translate("MainWindow", u"Help", None))
        self.Linxlogo.setText("")
        self.Bateria.setText("")
        self.Batterylevel.setFormat(QCoreApplication.translate("MainWindow", u"%p.7%", None))
        self.Bateria1.setText(QCoreApplication.translate("MainWindow", u"Set SOC", None))
        self.status_4.setText(QCoreApplication.translate("MainWindow", u"State of charge:", None))
        self.status_3.setText(QCoreApplication.translate("MainWindow", u"Open Circuit Voltage (OCV):", None))
        self.Voltaje.setHtml(QCoreApplication.translate("MainWindow", u"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">V</span></p></body></html>", None))
        self.status_2.setText(QCoreApplication.translate("MainWindow", u"Capacity:", None))
        self.Ah.setHtml(QCoreApplication.translate("MainWindow", u"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt; color:#ffffff;\">Ah</span></p></body></html>", None))
        self.status.setText(QCoreApplication.translate("MainWindow", u"Status:", None))
        self.textBrowser.setHtml(QCoreApplication.translate("MainWindow", u"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#f4f4f4;\">Discharging</span></p></body></html>", None))
        self.textBrowser_2.setHtml(QCoreApplication.translate("MainWindow", u"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\u03a9</span></p></body></html>", None))
        self.label.setText(QCoreApplication.translate("MainWindow", u"Internal Resistence (ESR):", None))
        self.status_7.setText(QCoreApplication.translate("MainWindow", u"Terminal  Voltage (Vt):", None))
        self.Voltaje_3.setHtml(QCoreApplication.translate("MainWindow", u"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">V</span></p></body></html>", None))
        self.textBrowser_3.setHtml(QCoreApplication.translate("MainWindow", u"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">A</span></p></body></html>", None))
        self.label_2.setText(QCoreApplication.translate("MainWindow", u"Current:", None))
        self.model.setText(QCoreApplication.translate("MainWindow", u"/int/battery/default/Lilon.cvs", None))
        self.label_3.setText(QCoreApplication.translate("MainWindow", u"Model:", None))
        self.model_2.setText(QCoreApplication.translate("MainWindow", u"3.100 Ah", None))
        self.label_4.setText(QCoreApplication.translate("MainWindow", u"Battery Capacity:", None))
        self.label_5.setText(QCoreApplication.translate("MainWindow", u"Battery bank interface", None))
        self.label_6.setText(QCoreApplication.translate("MainWindow", u"Current Limit:", None))
        self.model_3.setText(QCoreApplication.translate("MainWindow", u"1000 00 A", None))
        self.label_7.setText("")
    # retranslateUi

