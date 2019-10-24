/*Escrevendo/enviando Dados para o arduio através da porta serial.
 * Utilizando a função Serial.Write, com ela podemos enviar dados 
 * val = valor único com byte; str = String com uma série de bytes;
 * buf = Um vetor com uma série de bytes;
By Professor Junior - Etec de Guaianazes.
 
 */

int bytesSent = 0;
int numero = 0;

void setup() {
  Serial.begin(9600);//Inicializando a porta Serial 
  //com velocidade de 9600.
  
  

}

void loop() {
//  bytesSent = Serial.write("2019");
//  delay(500);
//  Serial.print(bytesSent);

  //Outro exemplo de comunicação
  
  Serial.print("O número é: ");
  Serial.println(numero);
  delay(500);
  numero++;  

  
}
