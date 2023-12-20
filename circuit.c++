#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int pin8 = 8;
int analogPin = A0;
int sensorValue = 0; // store the value read
int limit = 40;

void setup() {
  pinMode(analogPin, INPUT);
  pinMode(pin8, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("What is the air ");
  lcd.print("quality today?");
  Serial.begin(9600);
  lcd.display();
}