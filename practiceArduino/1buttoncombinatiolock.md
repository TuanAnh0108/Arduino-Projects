① Declare the variables, led and button
```.ino
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 6);

int presscounter = 0;   
int presscounter1 = 0;
String setcode = "";
String pass = "";
const int led = 8;
const int button = 2;
unsigned long interrupt_time = millis();
unsigned long interrupt_time1 = millis();

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}
```
② Create function
```.ino

void setcode1(){       // This function will track the time when the user set the password
    presscounter++;
    interrupt_time = millis();
  }   
void setcode2(){        // This function will track the time when the user enter the password
    presscounter1++;
    interrupt_time1 = millis();
}


void blink(){      // This function will blink the LED
     digitalWrite(led, HIGH);
     delay(600);
     digitalWrite(led, LOW);
     delay(500);
}

void check1(){      // This function will check if the lenth of the password that the user setting is equal to 3
  if(setcode.length() == 3){
    digitalWrite(led, HIGH);
    delay(2000);
    digitalWrite(led, LOW);
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("The password is set!");
    for(int a = 0; a < 19; a++){     // This helps display the whole text 
     lcd.scrollDisplayLeft();
      delay(250);
    }
    lcd.clear();
  }
}

void check2(){       //This function will check if the passcode enter is correct
  if(pass.length() == 3 && pass == setcode){       //If the user has done with enterering password and the password is correct
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("The password is correct!");
    for(int a = 0; a < 25; a++){
     lcd.scrollDisplayLeft();
      delay(250);
    }
    for(int b = 0; b < 25; b++){
     lcd.scrollDisplayRight();
    }
    lcd.setCursor(0,1);
    lcd.clear();
    lcd.print("Unlock!");
    delay(2000);
    lcd.clear();
    digitalWrite(led, HIGH);
    delay(3000);
    digitalWrite(led, LOW);
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("Lock!");
    lock();
  } else if (pass.length() == 3 && pass != setcode){  //If the password is wrong
    for (int z = 0; z < 3; z++){
      blink();
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Wrong!!!");
      pass="";
    }
  }
}

void lock(){
   pass="";
}

```
③ 
```.ino
void loop() {
  unsigned long time = millis();

  if (setcode.length() < 3) {
   lcd.setCursor(0, 0);
  lcd.print("Set password:");
  attachInterrupt(0, setcode1, RISING);
  if(time - interrupt_time >= 3000 && presscounter != 0){
 
    for(int x = 0; x < presscounter; x++){
      blink();
    } 
    setcode+=presscounter;
    lcd.setCursor(0, 1);
    lcd.print(setcode);
    presscounter=0;
    check1();
 
  } 
  } else if(setcode.length() == 3) {
    lcd.setCursor(0, 0);
    lcd.print("Enter password:");
    attachInterrupt(0, setcode2, RISING);
  if(time - interrupt_time1 >= 3000 && presscounter1 != 0){
    for(int y = 0; y < presscounter1; y++){
      blink();
    } 
    pass+=presscounter1;
    lcd.setCursor(0,1);
    lcd.print(pass);
    Serial.print(pass);
    presscounter1=0;
    check2();
    delay(4000);
  }
  
}
}
```
