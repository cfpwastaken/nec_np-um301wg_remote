# NEC NP-UM301WG Arduino/Pico Remote Control

<details>
<summary>English</summary>

This repository contains code for controlling a NEC NP-UM301WG projector using an Arduino or Raspberry Pi Pico and a IR LED.

## Usage

1. You will need an Arduino (tested with an UNO) or a Raspberry Pi Pico.
2. You will also need an infrared LED and some wires.
3. Next, wire the LED to pin 3 on your Arduino or Pico. There are two types of IR LEDs, one with 3 pins and one with 2 pins. What pin is for what depends on the LED, I recommend looking up the datasheet for your LED.
- For the 3 pin one: Connect the VCC, or sometimes called +5V pin to 5V on your Arduino or 3V3 on your Pico. The GND pin should be connected to GND on your Arduino or Pico. The last pin is the data pin, connect this to pin 3 on your Arduino or Pico.
- For the 2 pin one: Connect the longer leg to pin 3 on your Arduino or Pico. The shorter leg should be connected to GND on your Arduino or Pico.
4. Next, wire a wire from 3.3V on your Arduino or Pico to pin 1. This is the trigger pin, which means you can also use a button to trigger the off command, wiring it directly like this will trigger it once you power your Arduino or Pico.
5. Next, connect your Arduino or Pico to your computer using a USB cable.
6. Now, open the Arduino IDE, which you can get [here](https://www.arduino.cc/en/software). If you are using a Pico you will need to follow [this tutorial](https://www.tomshardware.com/how-to/program-raspberry-pi-pico-with-arduino-ide), and then open the sketch.ino file from this repository in the Arduino IDE.
7. You will need to install the IRremote library.
- On Arduino IDE 1 you can do this by going to Sketch > Include Library > Manage Libraries, and then searching for IRremote. Click on the IRremote library and then click install.
- On Arduino IDE 2 you can do this by selecting the bookshelf icon in the middle left of the screen, and then searching for IRremote. Click on the IRremote library and then click install.
8. Now, upload the sketch to your Arduino or Pico.
9. You can now control the projector using the Arduino or Pico.

## Other commands

Right now, the sketch only supports turning off the projector. However, I have included a nec codes.txt file which contains other codes, you may add them yourself. If you do, please make a pull request.

</details>

<details>
<summary>German</summary>

Diese repository enthält Code zum Steuern eines NEC NP-UM301WG Projektors mit einem Arduino oder Raspberry Pi Pico und einer IR LED.

## Verwendung

1. Du brauchst einen Arduino (getestet mit einem UNO) oder einen Raspberry Pi Pico.
2. Du brauchst auch eine Infrarot LED und ein paar Kabel.
3. Jetzt, verbinde die LED mit Pin 3 auf deinem Arduino oder Pico. Es gibt zwei Arten von IR LEDs, eine mit 3 Pins und eine mit 2 Pins. Welcher Pin für was ist, hängt von der LED ab, ich empfehle dir, das Datenblatt zu deiner LED zu suchen.
- Für die 3 pin LED: Verbinde den VCC, oder manchmal +5V Pin mit 5V auf deinem Arduino oder 3V3 auf deinem Pico. Der GND Pin sollte mit GND auf deinem Arduino oder Pico verbunden sein. Der letzte Pin ist der Daten Pin, verbinde ihn mit Pin 3 auf deinem Arduino oder Pico.
- Für die 2 pin LED: Verbinde die längere Seite mit Pin 3 auf deinem Arduino oder Pico. Die kürzere Seite sollte mit GND auf deinem Arduino oder Pico verbunden sein.
4. Jetzt, verbinde ein Kabel von 3.3V auf deinem Arduino oder Pico mit Pin 1. Dies ist der Trigger Pin, was bedeutet, dass du auch einen Knopf verwenden kannst, um den Ausschaltbefehl auszulösen, wenn du es direkt wie hier verbindest, wird es ausgelöst, sobald du deinen Arduino oder Pico einschaltest.
5. Jetzt, verbinde deinen Arduino oder Pico mit deinem Computer mit einem USB Kabel.
6. Jetzt, öffne die Arduino IDE, die du [hier](https://www.arduino.cc/en/software) bekommen kannst. Wenn du einen Pico verwendest, musst du [dieser Anleitung](https://www.tomshardware.com/how-to/program-raspberry-pi-pico-with-arduino-ide) folgen, und dann die sketch.ino Datei aus diesem repository in der Arduino IDE öffnen.
7. Du musst die IRremote library installieren.
- Bei Arduino IDE 1 kannst du dies tun, indem du zu Sketch > Bibliothek einbinden > Bibliotheken verwalten gehst und dann nach IRremote suchst. Klicke auf die IRremote library und klicke dann auf installieren.
- Bei Arduino IDE 2 kannst du dies tun, indem du das Bücherregal Symbol in der Mitte links des Bildschirms auswählst und dann nach IRremote suchst. Klicke auf die IRremote library und klicke dann auf installieren.
8. Jetzt, lade den Sketch auf deinen Arduino oder Pico.
9. Du kannst den Projektor jetzt mit dem Arduino oder Pico steuern.

## Andere Befehle

Momentan unterstützt der Sketch nur das Ausschalten des Projektors. Ich habe jedoch eine nec codes.txt Datei beigefügt, die andere Codes enthält, du kannst sie selbst hinzufügen. Wenn du das tust, mach bitte einen Pull Request.

</details>