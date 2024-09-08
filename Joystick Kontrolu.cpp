#include <Arduino.h>
#define axisX A0
#define axisY A3
uint8_t joystickButton = 6 ;
void setup()
{
  Serial.begin(9600);
  pinMode(axisX, INPUT);
  pinMode(axisY, INPUT);
  pinMode(joystickButton , INPUT_PULLUP);
}

void loop ()
{
  uint16_t x = analogRead(axisX);
  uint16_t y = analogRead(axisY);
  uint8_t jButton= digitalRead(joystickButton);
  Serial.print (" Axis X: ");
  Serial.print(x);
  Serial.print (" Axis Y: ");
  Serial.print(y);
  Serial.print(" Button: ");
  Serial.print(jButton);
  Serial.println("  ");
  delay(250);
  
  
}