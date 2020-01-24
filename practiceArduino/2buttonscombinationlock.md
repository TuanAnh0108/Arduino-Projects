// Setting password and unlock. Based on the adding letter to the text each time press the buttons, I created
// program that can set the password and unlock it by comparing two text. 
// If the text the user enter is the same as the password set, the light on or unlock. 
// If the text is not the same, the light will blink.  

// Declaration
int ButA = 3;
int ButB = 2;
int led = 6;
String code=""; 
String code1=""; 

//Counter for the time users press the button
int presscounter=0; 
int presscounter1=0; 

void setup()
{ 
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(ButA, INPUT);
  pinMode(ButB, INPUT);
   
}

void loop()
{ 

  attachInterrupt(1, pressA, RISING);//button A in port 2
  attachInterrupt(0, pressB, RISING);//button B in port 3
  check();
  }

void pressA(){                //When the users press the button A
  static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
   if(interrupt_time - last_interrupt_time > 200) {
    last_interrupt_time = interrupt_time;
      code+="A";           // Add letter to the code
      presscounter++;      // Increasing counter
   }
 }

void pressB(){              //When the users press the button B
  static unsigned long last_interrupt_time1 = 0;
  unsigned long interrupt_time1 = millis();
   if(interrupt_time1 - last_interrupt_time1 > 200) {
    last_interrupt_time1 = interrupt_time1;
      code+="B";         // Add letter to the code
      presscounter++;
   }

}

void check(){            //check if the code inputted is correct
  static unsigned long last_interrupt_time2 = 0;
  unsigned long interrupt_time2 = millis();
  if (interrupt_time2 - last_interrupt_time2 > 200)
  {
    interrupt_time2 = last_interrupt_time2;
    if (presscounter == 3){   // 3 is the numbers of code for password
    if(code == "ABA"){  
      digitalWrite(led, HIGH); //light will turn on if the code is correct
      code="";
      presscounter=0;
    } else {              //if wrong, light will blink
      
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
      delay(1000);
      digitalWrite(led,HIGH);
      delay(1000);
      digitalWrite(led, LOW);
     
      presscounter=0;   // set the counter to 0 and empty the code
      code1="";
    }  
   }
   
 }
}

