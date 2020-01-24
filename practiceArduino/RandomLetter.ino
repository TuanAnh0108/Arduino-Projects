void setup()
{
  Serial.begin(9600);
  
  String Letter[] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","Z","W","Y"};
  
    
  for (int i=0; i<100;i++) {
    int num = random(0,24);
    Serial.println(Letter[num]);
  }
}

void loop()
{
  
}
