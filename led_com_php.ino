#include <SoftwareSerial.h>

int led = 0;
String ledS;

SoftwareSerial minhaserial(3,4);
 
void setup()   {
  Serial.begin(9600);
  minhaserial.begin(9600);
  pinMode(led, OUTPUT);
}
 
void loop()
{
  if(minhaserial.available() != '\n'){
  //if (Serial.available() > 0) { // Se a porta estiver disponível ...
    //ledS= Serial.read();
    ledS = String(minhaserial.readString());
  }
  led = ledS.toInt();

  //Serial.print(led);
  if (led == 7){
    digitalWrite(led, HIGH);
    delay(3000);
    digitalWrite(led, LOW); // Apaga ...
    delay(3000);  
  }
  
  
}

