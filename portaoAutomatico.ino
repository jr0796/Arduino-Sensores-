#include "Servo.h"

  Servo s; //variável que cuida do Servo

  int botao = 4;
  int estado = 0;
  int guardaestado = LOW;
  
void setup() {
  s.attach(3); //setando a porta do servo
  s.write(0);
  pinMode (botao, INPUT);
  Serial.begin(9600); //Porta Serial para acompanharmos os valores passados pelo potenciômetro
  
}

void loop() {
   estado= digitalRead (botao);

  if (estado==HIGH) {
    guardaestado =! guardaestado;
    delay(500);
  }
  if (guardaestado == LOW){ 
   

      s.write(120);
      delay(15); 
   
  }
  if (guardaestado ==HIGH){
    s.write(0);
    delay (15);
  }
  Serial.println(guardaestado);

  }
  
   
  
  
 
  
