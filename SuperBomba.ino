#include <SoftwareSerial.h>

int ledok = 9;
int ledAction = 8;
int bomba = 5; 
int rele = 2;

SoftwareSerial minhaSerial ( 3 , 4 ); // Portas para TX e RX
String comando; // variável do tipo stringo (vazia)

 void setup () {
  
  Serial. begin ( 9600 );
  minhaSerial. begin (9600 );

  pinMode (ledok, OUTPUT);
  pinMode (ledAction, OUTPUT);
  pinMode (bomba, OUTPUT);
  pinMode (rele, OUTPUT);
 }

 void loop () {
  comando = "";
  if (minhaSerial. available ()!='\n') {
//    while (minhaSerial. available ()) {
        comando = String(minhaSerial. readString ());
   // }  
  }  

float valor;
float litros;

valor = float(comando.toFloat());

litros = valor/3.49;
litros = litros*1000;
Serial.println (litros);

digitalWrite(ledok, LOW);
digitalWrite(ledAction, HIGH);
digitalWrite(rele, HIGH);
delay(litros);

digitalWrite(rele, LOW);
digitalWrite(ledAction, LOW);
digitalWrite(ledok, HIGH);





 

//  Serial. println (comando);
//
//  delay(2000);
  //comando = "";
    
 }
