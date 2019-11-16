# Unit2

1. [Design](#design)
1. [Development](#development)

Design
--------
![SystemDiagram](TrafficLight.png)
**Fig. 1** This is the arduino of the traffic light 

Development
------------
1. Traffic light

①　Declare the port number of each LED light and set the LED light as OUPUT
          
      int red = 10;
      int yellow = 9;
      int green = 8;
      
      void setup(){
      pinMode(red, OUTPUT);
      pinMode(yellow, OUTPUT);
      pinMode(green, OUTPUT);
      }

② Declare function changeLight(){}

      void changeLights(){}
      
③　Write code for the traffic light inside the changeLight function

    # Turn the green ligh off, the yellow light turns on 
       digitalWrite(green, LOW);
       digitalWrite(yellow, HIGH);
       delay(3000);
       
    # Turn off the yellow light, then turn on the red light
      digitalWrite(yellow, LOW);
      digitalWrite(red, HIGH);
      delay(5000);

    # Turn on the red and yellow light
      digitalWrite(yellow, HIGH);
      delay(2000);
    
    #  Turn off the red and yellow light, turn on the green light     
      digitalWrite(yellow, LOW);
      digitalWrite(red, LOW);
      digitalWrite(green, HIGH);
      delay(3000);
 ④　Execute the function changeLight inside the void loop() {}
    
      void loop(){
      changeLights();
      delay(15000);
     }  
     
2. The blink LED

①

②

③

④

3. The counter from 1 to 15 binary number

①

②

③

④



