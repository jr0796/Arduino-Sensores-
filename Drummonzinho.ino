#include <SoftwareSerial.h>

//# include  <SoftwareSerial.h >  // biblioteca para ajudar no controle do Bluetooth

// #define led 2
int IN1 = 2 ;
int IN2 = 3 ;
// Rodas Esquerda


int IN3 = 4 ;
int IN4 = 5 ;
// Rodas Direita
// ================================================== ==========

SoftwareSerial minhaSerial ( 11 , 10 ); // Portas para TX e RX
String comando; // variável do tipo stringo (vazia)

 void setup () {
  
  Serial. begin ( 9600 );
  minhaSerial. begin (9600 );

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  
 }

 void loop () {

 
  
  if (minhaSerial. available ()) {
    while (minhaSerial. available ()) {
        comando = String(minhaSerial. readString ());
    }  
  }  
//
//
//virando o carro para a direita
//   
   if (comando == "R") {
 

   digitalWrite (IN3, LOW);
   digitalWrite (IN4, LOW);
   digitalWrite (IN1, HIGH);
   digitalWrite (IN2, LOW);
  }
    
// Virando o carro para a esquerda.
     if (comando == "L") {
 
   digitalWrite (IN1, LOW);
   digitalWrite (IN2, LOW);
   digitalWrite (IN3, HIGH);
   digitalWrite (IN4, LOW);
  

     
  }

// Parando o carro.
     if (comando == "S") {
 
   digitalWrite (IN1, LOW);
   digitalWrite (IN2, LOW);
   digitalWrite (IN3, LOW);
   digitalWrite (IN4, LOW);
 }

// Andando para frente.
     if (comando == "F") {
 
   digitalWrite (IN1, HIGH);
   digitalWrite (IN2, LOW);
   digitalWrite (IN3, HIGH);
   digitalWrite (IN4, LOW);
   }
//
// Andando para Trás.
     if (comando == "B") {
 
   digitalWrite (IN1, LOW);
   digitalWrite (IN2, HIGH);
   digitalWrite (IN3, LOW);
   digitalWrite (IN4, HIGH);
  

     
     }

  Serial. println (comando);
 
    
    // comando = ""; // limpando uma variável Command


//      if (Serial.available ()) {
//       delay (10);
//       minhaSerial.write (Serial.read ());
  }
