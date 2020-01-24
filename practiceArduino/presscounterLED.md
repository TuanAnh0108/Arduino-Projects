int LED = 8;
int button = 2;
int presscounter = 0;
int S = 3;
unsigned long interrupt_time = millis();
 
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  attachInterrupt(0, press, RISING);
  unsigned long time = millis();
  
  if(time - interrupt_time >= 3000){
    for(int x = 0; x < presscounter; x++){
      blink();
    } 
     presscounter=0;
  }
}

void press(){
    presscounter++;
    interrupt_time = millis();
    Serial.print(presscounter);
  }   
  
void blink(){
     digitalWrite(LED, HIGH);
     delay(600);
     digitalWrite(LED, LOW);
     delay(500);
}
