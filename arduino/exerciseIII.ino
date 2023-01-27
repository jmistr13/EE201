void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); //a
  pinMode(4, OUTPUT); //b
  pinMode(5, OUTPUT); //c
  pinMode(6, OUTPUT); //d
  pinMode(7, OUTPUT); //e
  pinMode(8, OUTPUT);// f
  pinMode(9, OUTPUT);// g

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delay(1500); //9
  digitalWrite(7, LOW);
  delay(1500); //8
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(1500); //7
  digitalWrite(4, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1500); //6
  digitalWrite(7, HIGH);
  delay(1500); //5
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  delay(1500);//4
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(1500); //3
  digitalWrite(4, LOW);
  digitalWrite(8, HIGH); 
  delay(1500); //2
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  delay(1500); //1
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(1500);
  
  
  


}
