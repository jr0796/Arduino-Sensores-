//Sensor de Ultrasonico

int botao = 6 ;
int estado = 0 ;
int ligadesliga = 0 ;
int frequencia = 0;
int Pinofalante = 2;


//adicionando a biblioteca ultrasonic
#include "Ultrasonic.h"

//Criando objeto Ultrasonic e já definindo as portas
Ultrasonic Ultrasonic(4,5);



long microsec = 0;
float distanciaCM = 0;

void setup() {
  Serial.begin(9600);
  pinMode (botao, INPUT); 
  pinMode(Pinofalante, OUTPUT);
}

void loop() {
  
  estado = digitalRead (botao); // Recebe o estado do botão aberto ou não.
  
    if (estado == HIGH) {
      ligadesliga = ligadesliga + 1 ;
      // Toda vez que o botão para abrir o contador soma 1;
     }
    
    if ((ligadesliga% 2 == 0 )) { // Sempre que o contador de instruções funcionais.
   
      //Lendo o senor
      microsec = Ultrasonic.timing();

      //Convertendo a distência em CM
      distanciaCM = Ultrasonic.convert(microsec, Ultrasonic::CM);
      if (distanciaCM<30){
            tone (2,190,100);
            delay(20);
            noTone(2); 
            delay(15);  
      
      }
      
      if(distanciaCM>30){
          tone (2,190,100);
          delay(120);
          noTone(2); 
          delay(100);

        
      }
  
     // Serial.print(distanciaCM);
    //  Serial.println(" cm");
      delay(500);
  
    } else {
      delay(500);
    }
  
    //Serial.println (estado);
   Serial. println (ligadesliga);
    // imprimindo contador
    delay(500);
  
  
  
 
  
  
  
}


