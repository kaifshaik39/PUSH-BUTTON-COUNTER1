#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int buttonPin = 2;
int buttonState;
int lastButtonState = LOW;
int counter = 0;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

LiquidCrystal_I2C lcd(0x27, 16, 2); // Check I2C address

void setup() {
  pinMode(buttonPin, INPUT);
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Count: 0");
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading == HIGH && lastButtonState == LOW) {
      counter++;
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Button Count:");
      lcd.setCursor(0, 1);
      lcd.print(counter);
    }
  }

  lastButtonState = reading;
}
