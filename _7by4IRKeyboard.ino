

#include "usb_keyboard.h"



//#define PIN_IR 5
#define PIN_STATUS 13


#define PIN_DETECT1 32
#define PIN_DETECT2 31

#define PIN_DETECT3 25
#define PIN_DETECT4 24



#define PIN_STATUS 13

#define PIN_DETECT5 39

#define PIN_DETECT6 38

#define PIN_DETECT7 37

#define PIN_DETECT8 36

#define PIN_DETECT9 35

#define PIN_DETECT10 34

#define PIN_DETECT11 33

const int ledPin5 = 2;

const int ledPin6 = 3;

const int ledPin7 = 4;

const int ledPin8 = 5;

const int ledPin9 = 6;

const int ledPin10 = 7;

const int ledPin11 = 8;

const int ledPin1 = 30;

const int ledPin2 = 29;

const int ledPin3 = 10;


const int ledPin4 = 9;



int buttonState1 = 0;         // current state of the button
int lastButtonState1 = 0;     // previous state of the button


int buttonState2 = 0;         // current state of the button
int lastButtonState2 = 0;     // previous state of the button


int buttonState3 = 0;         // current state of the button
int lastButtonState3 = 0;     // previous state of the button

int buttonState4 = 0;         // current state of the button
int lastButtonState4 = 0;     // previous state of the button


int buttonState5 = 0;         // current state of the button
int lastButtonState5 = 0;     // previous state of the button


int buttonState6 = 0;         // current state of the button
int lastButtonState6 = 0;     // previous state of the button


int buttonState7 = 0;         // current state of the button
int lastButtonState7 = 0;     // previous state of the button

int buttonState8 = 0;         // current state of the button
int lastButtonState8 = 0;     // previous state of the 

int buttonState9 = 0;         // current state of the button
int lastButtonState9 = 0;     // previous state of the button


int buttonState10 = 0;         // current state of the button
int lastButtonState10 = 0;     // previous state of the button


int buttonState11 = 0;         // current state of the button
int lastButtonState11 = 0;     // previous state of the button

int specialflag  = 0; 

int h=0;

int v=0;


void setup()
{



  Serial.begin(9600);
  pinMode(PIN_DETECT1, INPUT);

  pinMode(PIN_DETECT2, INPUT);

  pinMode(PIN_DETECT3, INPUT);

  pinMode(PIN_DETECT4, INPUT);
  
 pinMode(ledPin1, OUTPUT);
  
  pinMode(ledPin2, OUTPUT);

   pinMode(ledPin3, OUTPUT);
  
  pinMode(ledPin4, OUTPUT);

  pinMode(PIN_DETECT5, INPUT);

  pinMode(PIN_DETECT6, INPUT);

  pinMode(PIN_DETECT7, INPUT);

  pinMode(PIN_DETECT8, INPUT);

  
  pinMode(PIN_DETECT9, INPUT);

  pinMode(PIN_DETECT10, INPUT);

  pinMode(PIN_DETECT11, INPUT);
  
 pinMode(ledPin5, OUTPUT);
  
  pinMode(ledPin6, OUTPUT);

   pinMode(ledPin7, OUTPUT);
  
  pinMode(ledPin8, OUTPUT);

    
  pinMode(ledPin9, OUTPUT);

   pinMode(ledPin10, OUTPUT);
  
  pinMode(ledPin11, OUTPUT);
  
  pinMode(PIN_STATUS, OUTPUT);
  
  analogWriteFrequency(ledPin1, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin1, 128);

    analogWriteFrequency(ledPin2, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin2, 128);

    analogWriteFrequency(ledPin3, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin3, 128);
//
    analogWriteFrequency(ledPin4, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin4, 128);

  analogWriteFrequency(ledPin5, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin5, 128);

    analogWriteFrequency(ledPin6, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin6, 128);

    analogWriteFrequency(ledPin7, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin7, 128);

    analogWriteFrequency(ledPin8, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin8, 128);

    analogWriteFrequency(ledPin9, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin9, 128);

    analogWriteFrequency(ledPin10, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin10, 128);

    analogWriteFrequency(ledPin11, 38000);   //20 frequency with 10 duty cycle is getting detected
  analogWrite(ledPin11, 128);
  
   // analogWriteFrequency(17, 38000);   //20 frequency with 10 duty cycle is getting detected
//
//analogWriteFrequency(17, 38000); 
//  analogWrite(17, 128);


}

void loop() {

    digitalWrite(PIN_STATUS, !digitalRead(PIN_DETECT1));

    if (h==0){

        buttonState1 = digitalRead(PIN_DETECT1);

       if (buttonState1 != lastButtonState1  && buttonState1!=0){
       h=1;
//       lastButtonState1=buttonState1;
      // goto Vertical;
    }

    
    buttonState2 = digitalRead(PIN_DETECT2);
    if (buttonState2 != lastButtonState2  && buttonState2!=0){
       h=2;
//       lastButtonState2=buttonState2;
    //   goto Vertical;
    }


    buttonState3 = digitalRead(PIN_DETECT3);

       if (buttonState3 != lastButtonState3 && buttonState3!=0 ){
       h=3;
      
//       lastButtonState3=buttonState3;
    //   goto Vertical;
    }

    
    buttonState4 = digitalRead(PIN_DETECT4);
    if (buttonState4 != lastButtonState4  && buttonState4!=0){
       h=4;
//       lastButtonState4=buttonState4;
      // goto Vertical;
    }
    }
    //goto preend;

    Vertical:
    if (h!=0 && v == 0)
    {
    buttonState5 = digitalRead(PIN_DETECT5);

       if (buttonState5 != lastButtonState5  && buttonState5!=0){
       v=1;
//       lastButtonState5=buttonState5;
       goto printer;
    }

    
    buttonState6 = digitalRead(PIN_DETECT6);
    if (buttonState6 != lastButtonState6  && buttonState6!=0){
       v=2;
//       lastButtonState6=buttonState6;
       goto printer;
    }


    buttonState7 = digitalRead(PIN_DETECT7);

       if (buttonState7 != lastButtonState7  && buttonState7!=0){
       v=3;
//       lastButtonState7=buttonState7;
       goto printer;
    }

    
    buttonState8 = digitalRead(PIN_DETECT8);
    if (buttonState8 != lastButtonState8  && buttonState8!=0){
       v=4;
       
       goto printer;
    }

        buttonState9 = digitalRead(PIN_DETECT9);

       if (buttonState9 != lastButtonState9  && buttonState9!=0){
       v=5;
//       lastButtonState9=buttonState9;
       goto printer;
    }

    
    buttonState10 = digitalRead(PIN_DETECT10);
    if (buttonState10 != lastButtonState10  && buttonState10!=0){
       v=6;
//       lastButtonState10=buttonState10;
       goto printer;
    }


    buttonState11 = digitalRead(PIN_DETECT11);

       if (buttonState11 != lastButtonState11  && buttonState11!=0){
       v=7;
//       lastButtonState11=buttonState11;
       goto printer;
       
    }
     
    }
    
    printer:
    if (h !=0 && v!=0)
    {
        if (h == 1 && v == 1){
            if (specialflag == 1){ Keyboard.print("1");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("A");
            h=0;
            v=0;
            goto label;
            }
    }

          if (h == 1 && v == 2){
            if (specialflag == 1){ Keyboard.print("2");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("B");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 1 && v == 3){
            if (specialflag == 1){ Keyboard.print("3");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("C");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 1 && v == 4){
            if (specialflag == 1){ Keyboard.print("4");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("D");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 1 && v == 5){
            if (specialflag == 1){ Keyboard.print("5");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("E");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 1 && v == 6){
            if (specialflag == 1){ Keyboard.print("6");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("F");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 1 && v == 7){
            if (specialflag == 1){ Keyboard.print("7");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("G");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 2 && v == 1){
            if (specialflag == 1){ Keyboard.print("8");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("H");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 2 && v == 2){
            if (specialflag == 1){ Keyboard.print("9");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("I");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 2 && v == 3){
            if (specialflag == 1){ Keyboard.print("0");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("J");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 2 && v == 4){
            if (specialflag == 1){ Keyboard.print(",");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("K");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 2 && v == 5){
            if (specialflag == 1){ Keyboard.print(".");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("L");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 2 && v == 6){
            if (specialflag == 1){ Keyboard.print("/");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("M");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 2 && v == 7){
            if (specialflag == 1){ Keyboard.print("'");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("N");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 3 && v == 1){
            if (specialflag == 1){ Keyboard.print(";");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("O");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 3 && v == 2){
            if (specialflag == 1){ Keyboard.print(":");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("P");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 3 && v == 3){
            if (specialflag == 1){ Keyboard.print("@");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("Q");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 3 && v == 4){
            if (specialflag == 1){ Keyboard.print("_");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("R");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 3 && v == 5){
            if (specialflag == 1){ Keyboard.print("-");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("S");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 3 && v == 6){
            if (specialflag == 1){ Keyboard.print("!");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("T");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 3 && v == 7){
            if (specialflag == 1){ Keyboard.print("+");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("U");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 4 && v == 1){
            specialflag = !specialflag;
        h=0;
       v=0;
      
       goto label;
    }
          if (h == 4 && v == 2){
       Keyboard.print(" ");
       h=0;
       v=0;
      
       goto label;
    }
          if (h == 4 && v == 3){

            if (specialflag == 1){ Keyboard.print("&");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("V");
            h=0;
            v=0;
            goto label;
            }
          }
          if (h == 4 && v == 4){
            if (specialflag == 1){ Keyboard.print("~");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("W");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 4 && v == 5){
            if (specialflag == 1){ Keyboard.print("(");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("X");
            h=0;
            v=0;
            goto label;
            }
    }
          if (h == 4 && v == 6){
            if (specialflag == 1){ Keyboard.print(")");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("Y");
            h=0;
            v=0;
            goto label;
            }
      
       
    }

          if (h == 4 && v == 7){
            if (specialflag == 1){ Keyboard.print("*");  h=0;
            v=0; goto label;}
            else{
            Keyboard.print("Z");
            h=0;
            v=0;
            goto label;
            }
    }
    }
    
    label:
    
    lastButtonState5=buttonState5;
    lastButtonState6=buttonState6;
    lastButtonState7=buttonState7;
    lastButtonState8=buttonState8;
    lastButtonState9=buttonState9;
    lastButtonState10=buttonState10;
    lastButtonState11=buttonState11;
    
    lastButtonState1=buttonState1;
    lastButtonState2=buttonState2;
    lastButtonState3=buttonState3;
    lastButtonState4=buttonState4;
    
    preend:
    
  delay(5);

 
}
