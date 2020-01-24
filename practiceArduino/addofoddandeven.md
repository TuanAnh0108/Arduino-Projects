long sumEven=0;
long sumOdd=0;


void setup()
{
  Serial.begin(9600);
  
  for(int i = 0; i < 1001; i=i+2) {
  		sumEven += i;
    
  }
  
  Serial.print("Sum of even number is: ");
  Serial.println(sumEven);
  
  for(int j = 1; j < 1001; j=j+2) {
  		sumOdd += j;
  }
  
  Serial.print("Sum of odd number is: ");
  Serial.println(sumOdd);
  
}
