#include <IRremote.h>

IRrecv irrecv(11);    // create an instance of the IR receiver
IRsend irsend(3);        // create an instance of the IR sender

int buttonState;
int lastButtonState = LOW;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();  // enable the IR receiver
  pinMode(1, INPUT);
}

void loop() {
  if (irrecv.decode()) {
    irrecv.printIRSendUsage(&Serial);
    //delay(3000);
    //irsend.sendPanasonic(0x8, 0x20, 1);
    //Serial.println("Sent");
    IrReceiver.resume();
  }
  int reading = digitalRead(1);

  if(reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if((millis() - lastDebounceTime) > debounceDelay) {
    if(reading != buttonState) {
      buttonState = reading;

      if(buttonState == HIGH) {
        Serial.println("1");
        irsend.sendPulseDistanceWidth(38, 8950, 4450, 550, 1650, 550, 550, 0xFF00EB14E918, 48, PROTOCOL_IS_LSB_FIRST, 1, 1);
        delay(1000);
        Serial.println("2");
        irsend.sendPulseDistanceWidth(38, 8950, 4500, 550, 1650, 550, 550, 0xFF00EB14E918, 48, PROTOCOL_IS_LSB_FIRST, 1, 1);
        delay(1000);
        Serial.println("3");
        irsend.sendPulseDistanceWidth(38, 8950, 4500, 550, 1700, 550, 550, 0xFF00EB14E918, 48, PROTOCOL_IS_LSB_FIRST, 1, 1);
        delay(1000);
        Serial.println("4");
        irsend.sendPulseDistanceWidth(38, 8950, 4450, 600, 1650, 600, 550, 0xFF00EB14E918, 48, PROTOCOL_IS_LSB_FIRST, 1, 1);
        delay(1000);
        Serial.println("5");
        irsend.sendPulseDistanceWidth(38, 8900, 4500, 550, 1650, 550, 550, 0xFF00EB14E918, 48, PROTOCOL_IS_LSB_FIRST, 1, 1);
        delay(1000);
        Serial.println("6");
        irsend.sendPulseDistanceWidth(38, 8950, 4450, 550, 1700, 550, 550, 0xFF00EB14E918, 48, PROTOCOL_IS_LSB_FIRST, 1, 1);
        delay(1000);
        Serial.println("Done!");
      }
    }
  }

  lastButtonState = reading;
}