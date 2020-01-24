
void setup()
{
  Serial.begin(9600);
  
  for(int i=1; i<100;i++) {
  	int mod=(i%10);
    
    if (mod == 1 && i != 11) {
      Serial.print(i);
      Serial.println("st");  
    } else if (mod == 2 && i != 12) {
       Serial.print(i);
       Serial.println("nd");  
    } else if (mod == 3 && i != 13) {
       Serial.print(i);
       Serial.println("rd");  
    } else {
       Serial.print(i);
       Serial.println("th");
    }
    
  }
  
}

void loop()
{
  
}
