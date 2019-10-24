/*Comunicação Serial controlando arduino pelo PC.
 * O programa irá imprimir números de 0 a 25 (Podendo ser alterado ess valor)
 * Depois entra em uma estrutra de repetição da qual não sairá mais
 * parantemente ele para
 
 */

int meuValor =0;



void setup() {
  Serial.begin(9600); 
  Serial.println("Exibindo valores em sistemas diversos");

  

}

void loop() {
  for (meuValor = 0; meuValor <= 25; meuValor++){
    Serial.print("Dec: ");
    Serial.println(meuValor);
    delay(800);

    Serial.print("Bin: ");
    Serial.println(meuValor, BIN);
    delay(800);
    Serial.print("Oct: ");
    Serial.println(meuValor, OCT);
    delay(800);
    Serial.print("Hex: ");
    Serial.println(meuValor, HEX);
    delay(800);

    Serial.println("===================");

    //Quando o valor for maior que 255, não repetir mais.

    if (meuValor == 25) {
      while(true) {
        continue;
                
      }
    }
    
  }

}
