void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //OUTPUT=SAIDA OU INPUT=ENTRADA

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,LOW); //HIGH = LIGADA(5V) OU LOW=DESLIGADA(0V)
  delay(1000); //PAUSA DE 1 SEG
  digitalWrite(13,HIGH);
  delay(1000); 
}
