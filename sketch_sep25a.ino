const float pi = 3.14;
int hoogte;
int diameter;

void setup() {
  Serial.begin(9600);

Serial.println("Wat is de diameter?");
  while (Serial.available()==0)  {
  
  }
  diameter=Serial.parseInt();
  
  Serial.println("Wat is de hoogte?");
  while (Serial.available()==0)  {
  
  }
  hoogte=Serial.parseInt();

Serial.println("Het volume is :");
  float volume = pi * (diameter / 2) * (diameter / 2) * hoogte;
  Serial.print(volume);
  Serial.print(" kubieke cm2");
  delay (1000);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
