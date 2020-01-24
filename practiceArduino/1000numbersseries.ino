int num = -1;
int count;
void setup()
{
  Serial.begin(9600);
  
  for( count = 1; count < 1001; count++ ) {
    num += 1;
    Serial.println(num);
    
    if (num == 6){
    num = -1;
    }
         
  }
  
}
