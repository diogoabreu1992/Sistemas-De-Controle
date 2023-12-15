//ESTE PROGRAMA FAZ O LED DA PORT13 PISCAR

void setup() {
  pinMode(13,OUTPUT); //OUTPUT=SAIDA OU INPUT=ENTRADA
}

void loop() {
  digitalWrite(13,LOW); //HIGH = LIGADA(5V) OU LOW=DESLIGADA(0V)
  delay(1000); //PAUSA DE 1 SEG
  digitalWrite(13,HIGH);
  delay(1000); 
}
