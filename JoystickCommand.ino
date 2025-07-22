#include <Servo.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>

Adafruit_7segment display = Adafruit_7segment();
const int ledPin = 8;
const int Piezzo = 5;
const int joyButton = 4;

const int x=A0;
const int y=A1;
Servo servo;

void  setup() {
 //pinMode(x,INPUT);
 //pinMode(y,INPUT);
 servo.attach(6);
 pinMode(joyButton, INPUT_PULLUP); //joystick button uses internal pullup
 Serial.begin(9600);
 display.begin(0x70); // 0x70 is default I2C address for most LED backpacks
 pinMode(ledPin, OUTPUT);
 pinMode(Piezzo, OUTPUT);

}

void  loop() {
 //int xval=analogRead(x);
 //int yval=analogRead(y);
 int rawX = analogRead(x);
 int xval = map(rawX, 0, 1023, 1000, -1000);


 int speedAngle = map(xval, -1000, 1000, 0, 180);
 servo.write(speedAngle);

 display.clear();

 display.print(xval);
 display.writeDisplay();


  if (xval < 1000) {
  digitalWrite(ledPin, LOW); //turn on led
  } else {
  digitalWrite(ledPin, HIGH); //turn off led
    delay(200);
  digitalWrite(ledPin, LOW);
  }

if (xval < -700) {
  digitalWrite(Piezzo, HIGH); //turn on piezo
    delay(200);
  digitalWrite(Piezzo, LOW);
  } else {
  digitalWrite(Piezzo, LOW); //turn off piezo

  }


delay(50);
}
