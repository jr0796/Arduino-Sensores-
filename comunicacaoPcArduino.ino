/*Controlando o Arduino através da porta Serial
 * Muito legal isso, pois é possivel controlar sensores
 * e atuadores a partir do PC.
 * By professor Junior - Etec de Guaianazes
 */


const int led = 13;
int piscar = 0;
int cont =0;


void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available()){//Essa Função verifica se há carateres disponíveis;
    char caractere = Serial.read();//Variável para armazenar o que for digitado;
    if (isAlphaNumeric(caractere)){//|Função verifica se o caracter é um número Alphanumérico entre 0 e 9;
        piscar = (caractere -'0');//convertendo Char para int.

    }
  }
 
  piscando();//chamando função piscar;

}

void piscando(){
  if (piscar != 0){
    Serial.print("O número de vezes digitado foi: ");
    Serial.println(piscar);
    for (cont =1; cont <= piscar; cont++){
      digitalWrite(led, HIGH);
      delay(2000);
      digitalWrite(led, LOW);
      delay(1000);
      Serial.print("Já piscou: ");
      Serial.println(cont);
    }
    Serial.println("Programa finalizado");
    Serial.print("Obrigado!");
    piscar = 0;
  }
}
