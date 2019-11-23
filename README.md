

# Unit2

Content
---------

1. [Planning](#planning)
1. [Design](#design)
1. [Development](#development)
1. [Evaluation](#evaluation)

Planning
-----------
### Defining problem 

The year is 2050. Planet exploration is a thing, however, communication is still precarious. We are creating transmittor to solve the communication issue between Earth, Moon and Mars. To be more specific, in each place, there will have a transmittor and receivers. The people from Earth, can only receive and send the Morse information. Moreover, the people from Mars, can only receive and send the Binary information. However, the people from the Moon can receive and send both two types of information. Hence, the people from the Moon have to act as a liaison which both receive and transmit information from Earth and Mars. So the people on Moon have to translate information from decimal to binary, from binary to morse and vice versa. 

Design
--------

![SystemDiagram](TrafficLight.png)
**Fig. 1** This is the arduino of the traffic light 

![SystemDiagram](CounterBinary1to15.png)
**Fig. 2** This is the arduino of the counter binary

**Table of creating number segment**

| But A | But B | But C | Decimal | LED A | LED B | LED C | LED D | LED E | LED F | LED G |
|:----:|:----:|:----:|:----:|:----:|:----:|:----:|:----:|:----:|:----:|:----:|
|0|0|0|0|1|1|1|1|1|1|0|
|0|0|1|1|0|1|1|0|0|0|0|
|0|1|0|2|1|0|1|1|0|1|1|
|0|1|1|3|1|0|0|1|1|1|1|
|1|0|0|4|0|1|0|0|1|1|1|
|1|0|1|5|1|1|0|1|1|0|1|
|1|1|0|6|1|1|1|1|1|0|1|
|1|1|1|7|1|0|0|0|1|1|0|

Based on this table, the problem can be easily solved with logic gates. We can create equation for each light then it will show us the number we want. 

### Compare Bash and Arduino programing languge
① Advantages of bash and arduino

   | Bash | Arduino |
   | :--- | :--- |
   |Easy to learn and use| Compatible with many different platform |
   |Powerful, doing tasks in computer like: deleting, adding, creating files,... with just typing| Various type of data |
   |Can see the output immediately after finishing coding in the same app where writing code| Well suited with the large and complex task|
   |The command and syntax are exactly the same as those directly entered in command line, so programmer do not need to switch to entirely different syntax| Fast, effecient language|
   |Much quicker when writing code with bash| It is very easy to understand, it uses keywords like: if, switch, void,.. |
   |Customizing administrative tasks| You can easily find the error |
   |Quick start, and interactive debugging| |
   |No need to declare the type of data| |
   |No need to use ; to end a statement| |
   |No need to close a comment||

② Disadvantages of bash and arduino

   | Bash | Arduino |
   | :--- | :--- |
   |Prone to costly errors, a single mistake can change the command which might be harmful| Cannot do administrator tasks|
   |Slow execution speed| Need to declare the type of data|
   |Not well suited with the large and complex task| Need to close a comment|
   |Provide minimal data structure unlike other scripting languages| Need to ; to end a statement|
   |Limited data types| |
   |Compatibility problems between different platforms| |

③ Comparison of bash and arduino
   
   | Bash | Arduino |
   | :--- | :--- |
   | In bash, the for loop use curly braces for the statement that need to repeat. There are 3 parameters in the curly braces: initialization, condition and increment. You do not need to declare the data type of variable that you will use in your code. Moreover, you have to use do when opening a statement, done when closing the statement for the for loop. Next, at the end of the statement we do not need to use ";" to end the statement. When using a variable, you need to use "$" before the name of the variable. Then, to make a comment, you just use "#" to open a comment line. We use "echo" to print String or variable. Then, bash is a powerful programming language, it can do the administrator task| In Arduino,like bash we use curly braces for the statement that need to repeat. Also it has the same 3 parameters as in bash. You have to declare all the variable that you use in your program or it will cause errors. Next, the for loop just need to have open and close brackets for the statement. ";" is the compulsory thing in Arduino code, we have to use it to end the statement or it will cause errors. In the contrast of bash, arduino code does not require "$" when using variable. When making a comment, you need to open and close (using /* )the comment. We use "print" to print the string or variables. Arduino programming language cannot execute the administrator task like adding, deleting,.. files, folders.  |

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
      
![](TrafficLight.gif)
**Gif1** This is the result after making the arduino for the traffic light

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

          int redLED = 13;
          
          void setup() {
            pinMode(redLED, OUTPUT);
          }
          
          void loop(){
            blinkRED(1000);
            blinkRED(100);
          }
          
          void blinkRED(int t){
          digitalWrite(redLED, HIGH);
          delay(t);
          digitalWrite(redLED, LOW);
          delay(t);
          }

3. The counter from 1 to 15 binary number

          void setup()
          {
           pinMode(A, OUTPUT);
           pinMode(B, OUTPUT);
          pinMode(C, OUTPUT);
          pinMode(D, OUTPUT);
          }

          void loop()
          {
          for (i = 0; i <= 15; i += 1)
          {
          if (i%2 == 1)
          {
          digitalWrite (D, HIGH);
          } 
          if (i%4 > 1)
          {
          digitalWrite (C, HIGH);
          }
          if (i%8 > 3) 
          {
          digitalWrite (B, HIGH);
          }
          if (i%16 > 7)
          {
          digitalWrite (A, HIGH);
          }
          delay (300);
          digitalWrite (D, LOW);
          digitalWrite (C, LOW);
          digitalWrite (B, LOW);
          digitalWrite (A, LOW);
    
          }
          }  
          
 ![](CounterBinary.gif)
 **Gif2** This is the counter Binary number from 1 to 15 

4. The number segements

          int LEDA = 1;
          int LEDB = 2;
          int LEDC = 3;
          int LEDD = 4;
          int LEDE = 5;
          int LEDF = 6;       
          int LEDG = 7;
          int butA = 10;
          int butB = 11;
          int butC = 12;

       void setup()
       {
          pinMode(LEDA, OUTPUT);
          pinMode(LEDB, OUTPUT);
          pinMode(LEDC, OUTPUT);
          pinMode(LEDD, OUTPUT);
          pinMode(LEDE, OUTPUT);
          pinMode(LEDF, OUTPUT);
          pinMode(LEDG, OUTPUT);
          pinMode(butA, INPUT);
          pinMode(butB, INPUT);
          pinMode(butC, INPUT);
  
        }

       void loop()
         {
          bool A = digitalRead(butA);
          bool B = digitalRead(butB);
          bool C = digitalRead(butC);
          bool a = (!C & !A) | (B & !A) | (!C & A) | (A & !B);
          bool b = (!C & A) | (!B & !A) | (A & !B);
          bool c = (!A & !C) | (!A & !B) | (!C & B);
          bool d = (!A & !C) | (!A & B) | (B & !C) | (C & A & !B);
          bool e = A | (!C & !B) | (C & B);
          bool f = (!A & B) | (!C & !A) | (!C & !B);
          bool g = (!A & B) | (B & !C) | (A & !B);
          digitalWrite(LEDA, a);
          digitalWrite(LEDB, b);
          digitalWrite(LEDC, c);
          digitalWrite(LEDD, d);
          digitalWrite(LEDE, e);
          digitalWrite(LEDF, f);
          digitalWrite(LEDG, g);
                    
       }
![](NumberSegment.gif)
**Gif3** This is the Number Segment with 7 LEDs (it can show us number from 0 to 7)

Evaluation
---------







