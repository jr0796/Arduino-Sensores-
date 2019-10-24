//Sketch simples para controlar o botão.

//BOTÕEss
int botao1 = 2; // botão e sua porta.
int estadoBotao = 0; //Definindo uma variável para armazenar o estado do botão
int botao2 = 3;
int estadoBotao2 = 0;


//LEDss
int led = 4;
int led2 = 5;



void setup() {
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {

  estadoBotao = digitalRead(botao1);
  estadoBotao2 = digitalRead(botao2);


  if (estadoBotao == HIGH){
      digitalWrite(led, HIGH);
  }else{
      digitalWrite(led, LOW);
  }

  if (estadoBotao2 == HIGH){
      digitalWrite(led2, HIGH);
  }else{
      digitalWrite(led2, LOW);
  }
  
  
}
