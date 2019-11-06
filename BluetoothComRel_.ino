/*
 *Exemplo da utilização do módulo bluetooth para acionar um relé e acender uma lâmpada pelo celular. 
 *Adaptado da Internet.
 *By Professor Junior Etec de Guaianazes -2019
 */
 
#include <SoftwareSerial.h>
#include <Wire.h>
SoftwareSerial BT(10, 11); // TX, RX | TX para enviar dados e RX para receber dados. 
String command = "";
int rele = 7;

void setup()
{
  Serial.begin(9600);
  Serial.println("Tipo de Comando realizado");
  BT.begin(9600); // HC-05 usually default baud-rate
  pinMode(rele, OUTPUT);  
}

void loop(){

  //Leitura da porta serial via bluetooth
  if (BT.available()){ //Caso aconteça alguma alteração na leitura da porta...
    while(BT.available()){Enquanto houver atividade na porta...
     delay(15); 
     char c = BT.read(); //Converte os dados recebidos em um caractere.
     command = c; 
    } 
    Serial.println(command);
        
    if (command == "F"){
      digitalWrite(rele,HIGH);
    }
    if(command == "B"){
      digitalWrite(rele, LOW);
    }
 }
}

#EOF
