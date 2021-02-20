#include<Wire.h>

void setup() {
  // put your setup code here, to run once:
  
Wire.begin();
Serial.begin(115200);
//Wire.beginTransmission(9);
}

void loop() {
  Wire.beginTransmission(0x40);
  Wire.write("hello");
  Wire.endTransmission();
  // put your main code here, to run repeatedly:
delay(1000);
}
