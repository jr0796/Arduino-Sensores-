//Criando uma Função Random
long sorteado = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);

 // randomSeed(analogRead(0));//Usando a porta Analogica para gerar valores
 randomSeed(0);//Com essa função a última sequência não se repete.
}

void loop() {
  // put your main code here, to run repeatedly:
  sorteado = (random(10));
  Serial.println(sorteado);
  Serial.println("============");
  delay(1000);
}
