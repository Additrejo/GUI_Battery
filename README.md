# GUI_Battery
### Diseño de GUI para la caracterización de baterías.  

![IMG_20240229_125728](https://github.com/user-attachments/assets/79d56612-d358-4405-95d6-1bd0056a3eba)  
En este proyecto se presenta el proceso de elaboración de una GUI para la caracterización de bateríasde Ion-Litio para el Laboratorio de instruencacion Espacial - LINX UNAM ICN. 

## Descripción  

#### Menú desplagable.  
![IMG_20240229_130005](https://github.com/user-attachments/assets/ea0f89ee-3c65-4cbd-816c-42a2506165f0)  
Se despliega un menú con las opciones:  
**Home:**  para llevar a la página principal.   

**Data Analysis:** Aquí se encuentran las graficas obtenidas durante la medición.  

**Reporte:** Contiene las opciones de andar a imprimir los datos a través de un puerto COM o bien exportar los datos en formato xlsx.  

**Settings:** Configuraciones básicas.  

**Information:** Un pequeño manual del uso de la GUI-  

**Help** Redirecciona a una página ocn preguntas frecuentes y a contacto con el desarrollador.



#### Panel principal
![IMG_20240229_125728](https://github.com/user-attachments/assets/8ebfcfb7-9552-4bbe-817f-29d456fca34f)  
**State of charge:** Contiene un ícono que muestra el voltaje en tiempo real, así como la animación del SOC (_state of charge_)  que se actualiza conforme a la capacidad de la batería.  

**Status:** Contiene una cadena de caracteres que muestra el estado de la prueba; "Dischargin" y "Chargin".  

**Capacity:** Muestra la capacidad de la batería en Ah.  

**Open Circuit Voltage (OCV):** Voltaje suministrado por la batería.  

**Terminal Voltage (Vt):** Voltaje final de la prueba.  

**Internal Resistance (ESR):** Resistencia interna de la batería.  

**Current:** Corriente de descarga.  


---


## Desarrollo

Se utilizó Qtdesigner para el desarrollo de Frontend y Pycharm para el backend.  

[Qtdesigner](https://doc.qt.io/qt-6/qtdesigner-manual.html)   
![Untitled 2](https://github.com/user-attachments/assets/f6da60c8-94ec-4e61-a1dc-1d2f61defaf9)  
# Instalación de Qt Designer

## Windows
1. **Descargar Qt**  
   - Ve a la página oficial de Qt: [https://www.qt.io/download](https://www.qt.io/download)
   - Descarga el **Qt Online Installer**.

2. **Instalar Qt**  
   - Ejecuta el instalador y crea una cuenta en Qt si es necesario.
   - En la sección de selección de componentes, selecciona:
     - **Qt** → **Última versión compatible**.
     - **Developer and Designer Tools** → **Qt Designer**.

3. **Abrir Qt Designer**  
   - Busca `Qt Designer` en el menú Inicio.

---

## Linux (Ubuntu/Debian)
1. Abre la terminal y ejecuta:
   ```bash
   sudo apt update
   sudo apt install qttools5-dev-tools
   ```
2. Para ejecutar Qt Designer, usa:
   ```bash
   designer
   ```

---

## MacOS
1. Instala Qt con Homebrew:
   ```bash
   brew install qt
   ```
2. Luego, abre Qt Designer con:
   ```bash
   /usr/local/opt/qt/bin/designer
   ```

---

## Instalación desde Python (PyQt5 o PyQt6)
Si usas `PyQt5` o `PyQt6` en Python, puedes instalar Qt Designer con:
```bash
pip install pyqt5-tools
```
Para abrir Qt Designer desde Python:
```bash
python -m PyQt5.tools.designer
```

---


#### Instalacíón.

[Pycharm](https://www.jetbrains.com/es-es/pycharm/download/)  

---


## Versiones  


**version 1.0**  

![Untitled](https://github.com/user-attachments/assets/751c00c5-7885-4475-9f94-990f371c2c5b)  


---
Desarrollado para el Laboratorio de Instrumentación espacial LINX UNAM en el Instituto de Ciencias Nucleares.

![Portada_en_negro](https://github.com/user-attachments/assets/3a0979ae-b10f-4aff-8656-7b9ea6ba8229)

