/*
 * Fita de LED RGB com Arduino
 *
 * Version 1.0.0
 *
 * Efeitos simples de cores e flash (strobo) com a fita de LED RGB no Arduino
 * Copyright 2013, Hugo Demiglio
 * 
 * Para maiores detalhes, veja http://www.youtube.com/watch?v=mSwRuOnOkTE
 *
 */

#define RED 5 // pino PWM 5 para a cor vermelha
#define GREEN 3 // pino PWM 9 para a cor verde
#define BLUE 6 // pino PWM 6 para a cor azul

void setup(){
  // definindo os pinos como output
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  
  // No setup, um teste das cores
  
  // Acende e apaga o vermelho
  analogWrite(RED, 255);
  delay(4000);
  analogWrite(RED, 0);

  // Acende e apaga o verde
  analogWrite(GREEN, 255);
  delay(4000);
  analogWrite(GREEN, 0);
  
  // Acende e apaga o azul
  analogWrite(BLUE, 255);
  delay(4000);
  analogWrite(BLUE, 0);
  
  // Acendendo o azul, pois o loop do efeito de cores tem que começar com o azul aceso
  delay(4000);
  analogWrite(BLUE, 255);
}

void loop(){
  // Comente uma das funções para ver o efeito desejado
  
  // Efeito de fade por todas as cores da Fita de LED RGB
  efeito_de_cores();
  
//   Efeito Strobo
   strobo();
}

void efeito_de_cores(){
  // Declara as variáveis dos loops
  int r, g, b;
  
  // Fade do azul (ja estava aceso) até o violeta, adicionando o vermelho
  for(r = 0; r <= 255; r++){
    analogWrite(RED, r);
    delay(30);
  }
  
  // Fade do violeta até o vermelho, removendo o azul
  for(b = 255; b >= 0; b--){
    analogWrite(BLUE, b);
    delay(30);
  }
  
  // Fade do vermelho até o amarelo, adicionando o verde
  for(g = 0; g <= 255; g++){
    analogWrite(GREEN, g);
    delay(30);
  }
  
  // Fade do amarelo até o verde, removendo o vermelho
  for(r = 255; r >= 0; r--){
    analogWrite(RED, r);
    delay(30);
  }
  
  // Fade do verde até o turquesa, adicionando o azul
  for(b = 0; b <= 255; b++){
    analogWrite(BLUE, b);
    delay(30);
  }
  
  // Fade do turquesa até o azul, removendo o verde
  for(g = 255; g >= 0; g--){
    analogWrite(GREEN, g);
    delay(30);
  }
  
  // Em seguida o loop continua, com o azul aceso
}

void strobo(){
 
  for (int cont = 0; cont<100;cont++){
  // Acende todas as cores juntas
  analogWrite(RED, 255);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 255);
  delay(50);
  
  // Apaga todas as cores juntas
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(50);
  }
   // Apaga todas as cores juntas
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(2000);
  // Como o delay é rápido, a fita da um efeito tipo strobo
}
