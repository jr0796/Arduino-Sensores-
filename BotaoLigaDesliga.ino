/*Scketch para controlar um funcionamento de uma rotina controlada pelo aperto do botão
 * Começa funcionando aperta o botão, desliga, aperta novamente, volta a funcionar.
 * 
 */


//Variáveis
int botao = 7;
int estado = 0;
int ligadesliga = 0;
int led = 6;


void setup() {
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  estado=digitalRead(botao);//Recebe estado do botão apertado ou não.
  
    if (estado == LOW){
      ligadesliga = ligadesliga+1; 
      //Toda vez que o botão for apertado o contador soma 1;
    }
    if((ligadesliga %2==0)){ //Sempre que o contador for par a instrução funcionará.
      digitalWrite(led,HIGH);
    }else{ 
      digitalWrite(led,LOW);
    }
  
    //Serial.print(estado);
    Serial.println(ligadesliga);
    //imprimindo contador 
    delay(200);
  }
  /*OBS:
   * As vezes o botão apresenta um pequeno erro e o contador 
   * executa duas contagens consecutivas. 
   * 
   */
  
 //EOF 
