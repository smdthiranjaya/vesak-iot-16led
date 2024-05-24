int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 = 10;
int led10 = 11;
int led11 = 12;
int led12 = 13;
int led13 = A0;
int led14 = A1;
int led15 = A2;
int led16 = A3;

void setup() {
  Serial.begin(9600);
  Serial.println("Started:");
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(led14, OUTPUT);
  pinMode(led15, OUTPUT);
  pinMode(led16, OUTPUT);
}

void loop() {
  static String inputString = ""; // a String to hold incoming data
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    inputString += inChar;

    if (inChar == ';') {
      inputString.trim(); // Remove any leading/trailing whitespace
      String pattern = inputString.substring(0, inputString.length() - 1); // Remove the semicolon

      Serial.print("Raw data received: ");
      for (unsigned int i = 0; i < inputString.length(); i++) {
        Serial.print(inputString[i], HEX);
        Serial.print(" ");
      }
      Serial.println();

      Serial.println("Unooo Pattern:");
      Serial.println(pattern);

      if (pattern == "automatic") {
        automaticMode();
      } else if (pattern == "pattern1") {
        blink_1();
      } else if (pattern == "pattern2") {
        blink_2();
      } else if (pattern == "pattern3") {
        blink_3();
      } else if (pattern == "pattern4") {
        blink_4();
      } else if (pattern == "pattern5") {
        blink_5();
      } else if (pattern == "pattern6") {
        blink_6();
      } else if (pattern == "pattern7") {
        blink_7();
      } else if (pattern == "pattern8") {
        blink_8();
      } else if (pattern == "pattern9") {
        blink_9();
      } else if (pattern == "pattern10") {
        blink_10();
      } else if (pattern == "pattern11") {
        blink_11();
      } else if (pattern == "pattern12") {
        blink_12();
      } else if (pattern == "pattern13") {
        blink_13();
      } else if (pattern == "pattern14") {
        blink_14();
      } else if (pattern == "pattern15") {
        blink_15();
      }

      inputString = ""; // Clear the input
    }
  }

  delay(100); // Small delay to avoid flooding the serial buffer
}



void automaticMode() {
  blink_1();
  blink_1();
  blink_1();
  blink_1();
  
  blink_2();
  blink_2();
  blink_2();
  blink_2();
  
  blink_3();
  blink_3();
  blink_3();
  blink_3();
  
  blink_4();
  blink_4();
  blink_4();
  blink_4();
 
  blink_5();
  blink_5();
  blink_5();
  blink_5();

  blink_6();
  blink_6();
  blink_6();
  blink_6();

  blink_7();
  blink_7();
  blink_7();
  blink_7();

  blink_8();
  blink_8();
  blink_8();
  blink_8();
 
  blink_9();
  blink_9();
  blink_9();
  blink_9();

  blink_10();
  blink_10();
  blink_10();
  blink_10();

  blink_11();
  blink_11();
  blink_11();
  blink_11();

  blink_12();
  blink_12();
  blink_12();
  blink_12();

  blink_13();
  blink_13();
  blink_13();
  blink_13();

  blink_14();
  blink_14();
  blink_14();
  blink_14();

  blink_15();
  blink_15();
  blink_15();
  blink_15();


}

/////////////pattern 1///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_1()
{
  int t=160;

  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);
 
 

  //////////////////////////////////
  
  
  
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led16,LOW);
  delay(t);

////////////////////////////


  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
   digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);



//////////////////////////////////


  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led16,LOW);
  delay(t);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8, LOW); 
  digitalWrite(led9, LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  digitalWrite(led12,LOW);
  digitalWrite(led13,LOW);
  digitalWrite(led14,LOW);
  digitalWrite(led15,LOW);
  digitalWrite(led16, LOW);

  
}

/////////////pattern 2///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_2()
{
  int t=160;
 
  digitalWrite(led1,HIGH);
  delay(t);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led9,LOW);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led11,LOW);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led14,LOW);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led15,LOW);
  digitalWrite(led16,HIGH);
  delay(t);
  digitalWrite(led16,LOW);
  delay(t);

  
}


/////////////pattern 3///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_3()
{
  int t=160;
 
  digitalWrite(led1,LOW);
  delay(t);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led10,HIGH);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led11,HIGH);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led14,HIGH);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led15,HIGH);
  digitalWrite(led16,LOW);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);




//////////////////////////////////////

 digitalWrite(led1,LOW);
  delay(t);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led10,HIGH);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led11,HIGH);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led14,HIGH);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led15,HIGH);
  digitalWrite(led16,LOW);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);


}

/////////////pattern 4///////////////////////////////////////////////////////////////////////////////////////////////////KKKKKKKKKKKKKK
void blink_4()
{
  int t=200;

  digitalWrite(led1, HIGH );

  digitalWrite(led3,HIGH);
  
  digitalWrite(led5,HIGH);

  digitalWrite(led7,HIGH);

  digitalWrite(led9,HIGH);

  digitalWrite(led11,HIGH);

  digitalWrite(led13,HIGH);

  digitalWrite(led15,HIGH);

          

  
 
  digitalWrite(led2,LOW);
  
  digitalWrite(led4,LOW);
  
  digitalWrite(led6,LOW);
  
  digitalWrite(led8,LOW);

  digitalWrite(led10,LOW);

  digitalWrite(led12,LOW);

  digitalWrite(led14,LOW);

  digitalWrite(led16,LOW);
  
  delay(t);
////////////////
 digitalWrite(led1, LOW );

  digitalWrite(led3,LOW);
  
  digitalWrite(led5,LOW);

  digitalWrite(led7,LOW);

  digitalWrite(led9,LOW);

  digitalWrite(led11,LOW);

  digitalWrite(led13,LOW);

  digitalWrite(led15,LOW);

          

  
 
  digitalWrite(led2,HIGH);
  
  digitalWrite(led4,HIGH);
  
  digitalWrite(led6,HIGH);
  
  digitalWrite(led8,HIGH);

  digitalWrite(led10,HIGH);

  digitalWrite(led12,HIGH);

  digitalWrite(led14,HIGH);

  digitalWrite(led16,HIGH);
  
  delay(t);

///////////////////////////////////////////////////////////////////


  digitalWrite(led1, HIGH );

  digitalWrite(led3,HIGH);
  
  digitalWrite(led5,HIGH);

  digitalWrite(led7,HIGH);

  digitalWrite(led9,HIGH);

  digitalWrite(led11,HIGH);

  digitalWrite(led13,HIGH);

  digitalWrite(led15,HIGH);

          

  
 
  digitalWrite(led2,LOW);
  
  digitalWrite(led4,LOW);
  
  digitalWrite(led6,LOW);
  
  digitalWrite(led8,LOW);

  digitalWrite(led10,LOW);

  digitalWrite(led12,LOW);

  digitalWrite(led14,LOW);

  digitalWrite(led16,LOW);
  
  delay(t);
////////////////
 digitalWrite(led1, LOW );

  digitalWrite(led3,LOW);
  
  digitalWrite(led5,LOW);

  digitalWrite(led7,LOW);

  digitalWrite(led9,LOW);

  digitalWrite(led11,LOW);

  digitalWrite(led13,LOW);

  digitalWrite(led15,LOW);

          

  
 
  digitalWrite(led2,HIGH);
  
  digitalWrite(led4,HIGH);
  
  digitalWrite(led6,HIGH);
  
  digitalWrite(led8,HIGH);

  digitalWrite(led10,HIGH);

  digitalWrite(led12,HIGH);

  digitalWrite(led14,HIGH);

  digitalWrite(led16,HIGH);
  
  delay(t);

  

  digitalWrite(led1, LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8, LOW); 
  digitalWrite(led9, LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  digitalWrite(led12,LOW);
  digitalWrite(led13,LOW);
  digitalWrite(led14,LOW);
  digitalWrite(led15,LOW);
  digitalWrite(led16, LOW);
  

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 5///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_5()
{
  int t=130;




  

  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
   digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);
  
  
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led16,LOW);
  delay(t);
  


  digitalWrite(led16,HIGH);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led1,HIGH);
  delay(t);
 


  digitalWrite(led16,LOW);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led1,LOW);
  delay(t);

  //////////

    digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
   digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);
  
  
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led16,LOW);
  delay(t);
  


  digitalWrite(led16,HIGH);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led1,HIGH);
  delay(t);
 


  digitalWrite(led16,LOW);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led1,LOW);
  delay(t);

 

 
}

/////////////pattern 6///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_6()
{
  int t=160;

  digitalWrite(led1, HIGH );
  digitalWrite(led16, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  digitalWrite(led15, HIGH );
  delay(t);
  digitalWrite(led3,HIGH);
  digitalWrite(led14, HIGH );
  delay(t);
  digitalWrite(led4,HIGH);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  digitalWrite(led9,HIGH);
  delay(t);




  

  digitalWrite(led1, LOW );
  digitalWrite(led16, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  digitalWrite(led15, LOW );
  delay(t);
  digitalWrite(led3,LOW);
  digitalWrite(led14, LOW);
  delay(t);
  digitalWrite(led4,LOW);
  digitalWrite(led13,LOW);
  delay(t);
    digitalWrite(led5,LOW);
  digitalWrite(led12,LOW);
  delay(t);
    digitalWrite(led6,LOW);
  digitalWrite(led11,LOW);
  delay(t);
    digitalWrite(led7,LOW);
  digitalWrite(led10,LOW);
  delay(t);
      digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  delay(t);
      digitalWrite(led9,LOW);
  digitalWrite(led8,LOW);
  delay(t);


  

  ////////////////

  digitalWrite(led1, HIGH );
  digitalWrite(led16, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  digitalWrite(led15, HIGH );
  delay(t);
  digitalWrite(led3,HIGH);
  digitalWrite(led14, HIGH );
  delay(t);
  digitalWrite(led4,HIGH);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  digitalWrite(led9,HIGH);
  delay(t);




  

  digitalWrite(led1, LOW );
  digitalWrite(led16, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  digitalWrite(led15, LOW );
  delay(t);
  digitalWrite(led3,LOW);
  digitalWrite(led14, LOW);
  delay(t);
  digitalWrite(led4,LOW);
  digitalWrite(led13,LOW);
  delay(t);
    digitalWrite(led5,LOW);
  digitalWrite(led12,LOW);
  delay(t);
    digitalWrite(led6,LOW);
  digitalWrite(led11,LOW);
  delay(t);
    digitalWrite(led7,LOW);
  digitalWrite(led10,LOW);
  delay(t);
      digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  delay(t);
      digitalWrite(led9,LOW);
  digitalWrite(led8,LOW);
  delay(t);

}

/////////////pattern 7///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_7()
{
  int t=160;

  digitalWrite(led1, LOW );
  digitalWrite(led16, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  digitalWrite(led15, LOW );
  delay(t);
  digitalWrite(led3,LOW);
  digitalWrite(led14, LOW );
  delay(t);
  digitalWrite(led4,LOW);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led5,LOW);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  delay(t);



  
  

  digitalWrite(led8, HIGH );
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led7,HIGH);
  digitalWrite(led10, HIGH );
  delay(t);
  digitalWrite(led6,HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led4,HIGH);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led2,HIGH);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led1,HIGH);
  digitalWrite(led16,HIGH);
  delay(t);

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 8///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_8()
{
  int t=200;




digitalWrite(led1, LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8, LOW);
digitalWrite(led9, LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
digitalWrite(led13,LOW);
digitalWrite(led14,LOW);
digitalWrite(led15,LOW);
digitalWrite(led16, LOW);

delay(t);

digitalWrite(led1, HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8, HIGH);
digitalWrite(led9, HIGH);
digitalWrite(led10, HIGH);
digitalWrite(led11, HIGH);
digitalWrite(led12, HIGH);
digitalWrite(led13, HIGH);
digitalWrite(led14, HIGH);
digitalWrite(led15, HIGH);
digitalWrite(led16, HIGH);
delay(t);

digitalWrite(led1, LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8, LOW);
digitalWrite(led9, LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
digitalWrite(led13,LOW);
digitalWrite(led14,LOW);
digitalWrite(led15,LOW);
digitalWrite(led16, LOW);

delay(t);

digitalWrite(led1, HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8, HIGH);
digitalWrite(led9, HIGH);
digitalWrite(led10, HIGH);
digitalWrite(led11, HIGH);
digitalWrite(led12, HIGH);
digitalWrite(led13, HIGH);
digitalWrite(led14, HIGH);
digitalWrite(led15, HIGH);
digitalWrite(led16, HIGH);
delay(t);


digitalWrite(led1, LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8, LOW);
digitalWrite(led9, LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
digitalWrite(led13,LOW);
digitalWrite(led14,LOW);
digitalWrite(led15,LOW);
digitalWrite(led16, LOW);

delay(t);

digitalWrite(led1, HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8, HIGH);
digitalWrite(led9, HIGH);
digitalWrite(led10, HIGH);
digitalWrite(led11, HIGH);
digitalWrite(led12, HIGH);
digitalWrite(led13, HIGH);
digitalWrite(led14, HIGH);
digitalWrite(led15, HIGH);
digitalWrite(led16, HIGH);
delay(t);


digitalWrite(led1, LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8, LOW);
digitalWrite(led9, LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
digitalWrite(led13,LOW);
digitalWrite(led14,LOW);
digitalWrite(led15,LOW);
digitalWrite(led16, LOW);

delay(t);


digitalWrite(led1, HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8, HIGH);
digitalWrite(led9, HIGH);
digitalWrite(led10, HIGH);
digitalWrite(led11, HIGH);
digitalWrite(led12, HIGH);
digitalWrite(led13, HIGH);
digitalWrite(led14, HIGH);
digitalWrite(led15, HIGH);
digitalWrite(led16, HIGH);
delay(t);





}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 9///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_9()
{
  int t=160;

  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  
  digitalWrite(led3,HIGH);
  digitalWrite(led1, LOW );
  delay(t);

  digitalWrite(led4,HIGH);
  digitalWrite(led2, LOW );
  delay(t);

  digitalWrite(led5,HIGH);
  digitalWrite(led3, LOW );
  delay(t);

  digitalWrite(led6,HIGH);
  digitalWrite(led4, LOW );
  delay(t);

   digitalWrite(led7,HIGH);
  digitalWrite(led5, LOW );
  delay(t);

  digitalWrite(led8,HIGH);
  digitalWrite(led6, LOW );
  delay(t);

    digitalWrite(led9,HIGH);
  digitalWrite(led7, LOW );
  delay(t);

  digitalWrite(led10,HIGH);
  digitalWrite(led8, LOW );
  delay(t);

  digitalWrite(led11,HIGH);
  digitalWrite(led9, LOW );
  delay(t);

  digitalWrite(led12,HIGH);
  digitalWrite(led10, LOW );
  delay(t);

  digitalWrite(led13,HIGH);
  digitalWrite(led11, LOW );
  delay(t);

  digitalWrite(led14,HIGH);
  digitalWrite(led12, LOW );
  delay(t);

   digitalWrite(led15,HIGH);
  digitalWrite(led13, LOW );
  delay(t);

   digitalWrite(led16,HIGH);
  digitalWrite(led14, LOW );
  delay(t);

  digitalWrite(led15, LOW );
  delay(t);

  digitalWrite(led16, LOW );
  delay(t);



  
  digitalWrite(led16, HIGH );
  delay(t);

  digitalWrite(led15, HIGH );
  delay(t);

  digitalWrite(led14,HIGH);
  digitalWrite(led16, LOW );
  delay(t);

  digitalWrite(led13 ,HIGH);
  digitalWrite(led15, LOW );
  delay(t);

 digitalWrite(led12,HIGH);
  digitalWrite(led14, LOW );
  delay(t);

  digitalWrite(led11,HIGH);
  digitalWrite(led13, LOW );
  delay(t);

  digitalWrite(led10,HIGH);
  digitalWrite(led12, LOW );
  delay(t);

  digitalWrite(led9,HIGH);
  digitalWrite(led11, LOW );
  delay(t);

    digitalWrite(led8,HIGH);
  digitalWrite(led10, LOW );
  delay(t);

    digitalWrite(led7,HIGH);
  digitalWrite(led9, LOW );
  delay(t);

    digitalWrite(led6,HIGH);
  digitalWrite(led8, LOW );
  delay(t);

    digitalWrite(led5,HIGH);
  digitalWrite(led7, LOW );
  delay(t);

     digitalWrite(led4,HIGH);
  digitalWrite(led6, LOW );
  delay(t);

    digitalWrite(led3,HIGH);
  digitalWrite(led5, LOW );
  delay(t);

    digitalWrite(led2,HIGH);
  digitalWrite(led4, LOW );
  delay(t);

  digitalWrite(led1,HIGH);
  digitalWrite(led3, LOW );
  delay(t);


  digitalWrite(led2, LOW );
  delay(t);

  digitalWrite(led1, LOW );
  delay(t);



////////////////////////////


digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  
  digitalWrite(led3,HIGH);
  digitalWrite(led1, LOW );
  delay(t);

  digitalWrite(led4,HIGH);
  digitalWrite(led2, LOW );
  delay(t);

  digitalWrite(led5,HIGH);
  digitalWrite(led3, LOW );
  delay(t);

  digitalWrite(led6,HIGH);
  digitalWrite(led4, LOW );
  delay(t);

   digitalWrite(led7,HIGH);
  digitalWrite(led5, LOW );
  delay(t);

  digitalWrite(led8,HIGH);
  digitalWrite(led6, LOW );
  delay(t);

    digitalWrite(led9,HIGH);
  digitalWrite(led7, LOW );
  delay(t);

  digitalWrite(led10,HIGH);
  digitalWrite(led8, LOW );
  delay(t);

  digitalWrite(led11,HIGH);
  digitalWrite(led9, LOW );
  delay(t);

  digitalWrite(led12,HIGH);
  digitalWrite(led10, LOW );
  delay(t);

  digitalWrite(led13,HIGH);
  digitalWrite(led11, LOW );
  delay(t);

  digitalWrite(led14,HIGH);
  digitalWrite(led12, LOW );
  delay(t);

   digitalWrite(led15,HIGH);
  digitalWrite(led13, LOW );
  delay(t);

   digitalWrite(led16,HIGH);
  digitalWrite(led14, LOW );
  delay(t);

  digitalWrite(led15, LOW );
  delay(t);

  digitalWrite(led16, LOW );
  delay(t);



  
  digitalWrite(led16, HIGH );
  delay(t);

  digitalWrite(led15, HIGH );
  delay(t);

  digitalWrite(led14,HIGH);
  digitalWrite(led16, LOW );
  delay(t);

  digitalWrite(led13 ,HIGH);
  digitalWrite(led15, LOW );
  delay(t);

 digitalWrite(led12,HIGH);
  digitalWrite(led14, LOW );
  delay(t);

  digitalWrite(led11,HIGH);
  digitalWrite(led13, LOW );
  delay(t);

  digitalWrite(led10,HIGH);
  digitalWrite(led12, LOW );
  delay(t);

  digitalWrite(led9,HIGH);
  digitalWrite(led11, LOW );
  delay(t);

    digitalWrite(led8,HIGH);
  digitalWrite(led10, LOW );
  delay(t);

    digitalWrite(led7,HIGH);
  digitalWrite(led9, LOW );
  delay(t);

    digitalWrite(led6,HIGH);
  digitalWrite(led8, LOW );
  delay(t);

    digitalWrite(led5,HIGH);
  digitalWrite(led7, LOW );
  delay(t);

     digitalWrite(led4,HIGH);
  digitalWrite(led6, LOW );
  delay(t);

    digitalWrite(led3,HIGH);
  digitalWrite(led5, LOW );
  delay(t);

    digitalWrite(led2,HIGH);
  digitalWrite(led4, LOW );
  delay(t);

  digitalWrite(led1,HIGH);
  digitalWrite(led3, LOW );
  delay(t);


  digitalWrite(led2, LOW );
  delay(t);

  digitalWrite(led1, LOW );
  delay(t);



}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 10///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_10()
{
  int t=160;

  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  
  digitalWrite(led3,LOW);
  digitalWrite(led1, HIGH );
  delay(t);

  digitalWrite(led4,LOW);
  digitalWrite(led2, HIGH );
  delay(t);

  digitalWrite(led5,LOW);
  digitalWrite(led3, HIGH );
  delay(t);

  digitalWrite(led6,LOW);
  digitalWrite(led4, HIGH );
  delay(t);

  digitalWrite(led7,LOW);
  digitalWrite(led5, HIGH );
  delay(t);

  digitalWrite(led8,LOW);
  digitalWrite(led6, HIGH );
  delay(t);

  digitalWrite(led9,LOW);
  digitalWrite(led7, HIGH );
  delay(t);

  digitalWrite(led10,LOW);
  digitalWrite(led8, HIGH );
  delay(t);

  digitalWrite(led11,LOW);
  digitalWrite(led9, HIGH );
  delay(t);

  digitalWrite(led12,LOW);
  digitalWrite(led10, HIGH );
  delay(t);


  digitalWrite(led13,LOW);
  digitalWrite(led11, HIGH );
  delay(t);

  digitalWrite(led14,LOW);
  digitalWrite(led12, HIGH );
  delay(t);

  digitalWrite(led15,LOW);
  digitalWrite(led13, HIGH );
  delay(t);

  digitalWrite(led16,LOW);
  digitalWrite(led14, HIGH );
  delay(t);

  
digitalWrite(led15, HIGH );
  delay(t);

digitalWrite(led16, HIGH );
  delay(t);

  
digitalWrite(led16, LOW );
  delay(t);

  digitalWrite(led15, LOW );
  delay(t);

digitalWrite(led14,LOW);
  digitalWrite(led16, HIGH );
  delay(t);

  digitalWrite(led13 ,LOW);
  digitalWrite(led15, HIGH );
  delay(t);

 digitalWrite(led12,LOW);
  digitalWrite(led14, HIGH );
  delay(t);

 digitalWrite(led11,LOW);
  digitalWrite(led13, HIGH );
  delay(t);

   digitalWrite(led10,LOW);
  digitalWrite(led12, HIGH);
  delay(t);

   digitalWrite(led9,LOW);
  digitalWrite(led11, HIGH );
  delay(t);

     digitalWrite(led8,LOW);
  digitalWrite(led10, HIGH );
  delay(t);

   digitalWrite(led7,LOW);
  digitalWrite(led9, HIGH );
  delay(t);

   digitalWrite(led6,LOW);
  digitalWrite(led8, HIGH );
  delay(t);

   digitalWrite(led5,LOW);
  digitalWrite(led7, HIGH );
  delay(t);

   digitalWrite(led4,LOW);
  digitalWrite(led6, HIGH );
  delay(t);

   digitalWrite(led3,LOW);
  digitalWrite(led5, HIGH );
  delay(t);

   digitalWrite(led2,LOW);
  digitalWrite(led4, HIGH );
  delay(t);

   digitalWrite(led1,LOW);
  digitalWrite(led3, HIGH );
  delay(t);


digitalWrite(led2, HIGH );
  delay(t);

digitalWrite(led1, HIGH );
  delay(t);


//////////////////////////////////////////

 digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  
  digitalWrite(led3,LOW);
  digitalWrite(led1, HIGH );
  delay(t);

  digitalWrite(led4,LOW);
  digitalWrite(led2, HIGH );
  delay(t);

  digitalWrite(led5,LOW);
  digitalWrite(led3, HIGH );
  delay(t);

  digitalWrite(led6,LOW);
  digitalWrite(led4, HIGH );
  delay(t);

  digitalWrite(led7,LOW);
  digitalWrite(led5, HIGH );
  delay(t);

  digitalWrite(led8,LOW);
  digitalWrite(led6, HIGH );
  delay(t);

  digitalWrite(led9,LOW);
  digitalWrite(led7, HIGH );
  delay(t);

  digitalWrite(led10,LOW);
  digitalWrite(led8, HIGH );
  delay(t);

  digitalWrite(led11,LOW);
  digitalWrite(led9, HIGH );
  delay(t);

  digitalWrite(led12,LOW);
  digitalWrite(led10, HIGH );
  delay(t);


  digitalWrite(led13,LOW);
  digitalWrite(led11, HIGH );
  delay(t);

  digitalWrite(led14,LOW);
  digitalWrite(led12, HIGH );
  delay(t);

  digitalWrite(led15,LOW);
  digitalWrite(led13, HIGH );
  delay(t);

  digitalWrite(led16,LOW);
  digitalWrite(led14, HIGH );
  delay(t);

  
digitalWrite(led15, HIGH );
  delay(t);

digitalWrite(led16, HIGH );
  delay(t);

  
digitalWrite(led16, LOW );
  delay(t);

  digitalWrite(led15, LOW );
  delay(t);

digitalWrite(led14,LOW);
  digitalWrite(led16, HIGH );
  delay(t);

  digitalWrite(led13 ,LOW);
  digitalWrite(led15, HIGH );
  delay(t);

 digitalWrite(led12,LOW);
  digitalWrite(led14, HIGH );
  delay(t);

 digitalWrite(led11,LOW);
  digitalWrite(led13, HIGH );
  delay(t);

   digitalWrite(led10,LOW);
  digitalWrite(led12, HIGH);
  delay(t);

   digitalWrite(led9,LOW);
  digitalWrite(led11, HIGH );
  delay(t);

     digitalWrite(led8,LOW);
  digitalWrite(led10, HIGH );
  delay(t);

   digitalWrite(led7,LOW);
  digitalWrite(led9, HIGH );
  delay(t);

   digitalWrite(led6,LOW);
  digitalWrite(led8, HIGH );
  delay(t);

   digitalWrite(led5,LOW);
  digitalWrite(led7, HIGH );
  delay(t);

   digitalWrite(led4,LOW);
  digitalWrite(led6, HIGH );
  delay(t);

   digitalWrite(led3,LOW);
  digitalWrite(led5, HIGH );
  delay(t);

   digitalWrite(led2,LOW);
  digitalWrite(led4, HIGH );
  delay(t);

   digitalWrite(led1,LOW);
  digitalWrite(led3, HIGH );
  delay(t);


digitalWrite(led2, HIGH );
  delay(t);

digitalWrite(led1, HIGH );
  delay(t);


}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 11///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_11()
{
  int t=160;

  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
   digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);

 

  //////////////////////////////////
  
  digitalWrite(led16,LOW);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
   digitalWrite(led5,LOW);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  


 //////////////////////////////////

  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
   digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);

 

  //////////////////////////////////
  
  digitalWrite(led16,LOW);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
   digitalWrite(led5,LOW);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);

  
}
  
  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 12///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_12()
{
  int t=120;

digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);
   digitalWrite(led16,LOW);
  delay(t);

////////////
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);


////////////

  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
/////////
 digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
//////////
 digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
////////////
 digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
//////////
 digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
///////
 digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
///////////
 digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9, HIGH );
  delay(t);

//////////////////

  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);


///

  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
 
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
////

  digitalWrite(led1, HIGH );
  delay(t);
   digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
 
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);

////

  digitalWrite(led1, HIGH );
  delay(t);
   digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
 
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);


////

  digitalWrite(led1, HIGH );
  delay(t);
   digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
 
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);



  digitalWrite(led1, HIGH );
  delay(t);
   digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
 
  digitalWrite(led3,HIGH);
  delay(t);


 digitalWrite(led1, HIGH );
  delay(t);
   digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);

   digitalWrite(led1, HIGH );
  delay(t);
  







}  
   

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 13///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_13()
{
  int t=120;

  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8, HIGH );
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
   digitalWrite(led11,LOW);
  delay(t);
   digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led16,LOW);
  delay(t);
  digitalWrite(led16,HIGH);
  delay(t);


 /////// 
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8, HIGH );
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
   digitalWrite(led11,LOW);
  delay(t);
   digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
  digitalWrite(led15,HIGH);
  delay(t);
  digitalWrite(led16,LOW);
  delay(t);

///////////////////

 digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8, HIGH );
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
   digitalWrite(led11,LOW);
  delay(t);
   digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
  digitalWrite(led14,HIGH);
  delay(t);
  digitalWrite(led15,LOW);
  delay(t);
 //////////////////

  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8, HIGH );
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
   digitalWrite(led11,LOW);
  delay(t);
   digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led14,LOW);
  delay(t);
//////////////

 digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8, HIGH );
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
   digitalWrite(led11,LOW);
  delay(t);
   digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
//////////////

 digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8, HIGH );
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
   digitalWrite(led11,LOW);
  delay(t);
   digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
////////////////

 digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8, HIGH );
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
   digitalWrite(led11,LOW);
  delay(t);
////////////////
 digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8, HIGH );
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
///////////

 digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led8, HIGH );
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
 
//////////////
  digitalWrite(led1, LOW );
  delay(t);
  digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);


///

  digitalWrite(led1, LOW );
  delay(t);
   digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
 
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
////

  digitalWrite(led1, LOW );
  delay(t);
   digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
 
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);

  ////////

  digitalWrite(led1, LOW );
  delay(t);
   digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
 
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);

///////////

  digitalWrite(led1, LOW );
  delay(t);
   digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
 
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,LOW);
  delay(t);


  ///////////

   digitalWrite(led1, LOW );
  delay(t);
   digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
 
  digitalWrite(led3,LOW);
  delay(t);

 ///////////

      digitalWrite(led1, LOW );
  delay(t);
   digitalWrite(led1, HIGH );
  delay(t);
  digitalWrite(led2,LOW);
  delay(t);

 digitalWrite(led1, LOW );
  delay(t);

/////////////////////////

 
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 14///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_14()
{
  int t=160;

  digitalWrite(led1, LOW );
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  digitalWrite(led10, LOW );
  delay(t);
  digitalWrite(led3,LOW);
  digitalWrite(led11, LOW );
  delay(t);
  digitalWrite(led4,LOW);
  digitalWrite(led12, LOW );
  delay(t);
  digitalWrite(led5,LOW);
  digitalWrite(led13, LOW );
  delay(t);
  digitalWrite(led6,LOW);
  digitalWrite(led14, LOW );
  delay(t);
  digitalWrite(led7,LOW);
  digitalWrite(led15, LOW );
  delay(t);
  digitalWrite(led8,LOW);
  digitalWrite(led16, LOW );
  delay(t);



  digitalWrite(led1, HIGH );
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  digitalWrite(led10, HIGH );
  delay(t);
  digitalWrite(led3,HIGH);
  digitalWrite(led11, HIGH );
  delay(t);
  digitalWrite(led4,HIGH);
  digitalWrite(led12, HIGH );
  delay(t);
  digitalWrite(led5,HIGH);
  digitalWrite(led13, HIGH );
  delay(t);
  digitalWrite(led6,HIGH);
  digitalWrite(led14, HIGH );
  delay(t);
  digitalWrite(led7,HIGH);
  digitalWrite(led15, HIGH );
  delay(t);
  digitalWrite(led8,HIGH);
  digitalWrite(led16, HIGH );
  delay(t);

///////////////////

digitalWrite(led1, LOW );
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  digitalWrite(led10, LOW );
  delay(t);
  digitalWrite(led3,LOW);
  digitalWrite(led11, LOW );
  delay(t);
  digitalWrite(led4,LOW);
  digitalWrite(led12, LOW );
  delay(t);
  digitalWrite(led5,LOW);
  digitalWrite(led13, LOW );
  delay(t);
  digitalWrite(led6,LOW);
  digitalWrite(led14, LOW );
  delay(t);
  digitalWrite(led7,LOW);
  digitalWrite(led15, LOW );
  delay(t);
  digitalWrite(led8,LOW);
  digitalWrite(led16, LOW );
  delay(t);



  digitalWrite(led1, HIGH );
  digitalWrite(led9, HIGH );
  delay(t);
  digitalWrite(led2,HIGH);
  digitalWrite(led10, HIGH );
  delay(t);
  digitalWrite(led3,HIGH);
  digitalWrite(led11, HIGH );
  delay(t);
  digitalWrite(led4,HIGH);
  digitalWrite(led12, HIGH );
  delay(t);
  digitalWrite(led5,HIGH);
  digitalWrite(led13, HIGH );
  delay(t);
  digitalWrite(led6,HIGH);
  digitalWrite(led14, HIGH );
  delay(t);
  digitalWrite(led7,HIGH);
  digitalWrite(led15, HIGH );
  delay(t);
  digitalWrite(led8,HIGH);
  digitalWrite(led16, HIGH );
  delay(t);


  
}


  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 15///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_15()
{
  int t=160;

  digitalWrite(led1, LOW );
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  digitalWrite(led10, LOW );
  delay(t);
  digitalWrite(led3,LOW);
  digitalWrite(led11, LOW );
  delay(t);
  digitalWrite(led4,LOW);
  digitalWrite(led12, LOW );
  delay(t);
  digitalWrite(led5,LOW);
  digitalWrite(led13, LOW );
  delay(t);
  digitalWrite(led6,LOW);
  digitalWrite(led14, LOW );
  delay(t);
  digitalWrite(led7,LOW);
  digitalWrite(led15, LOW );
  delay(t);
  digitalWrite(led8,LOW);
  digitalWrite(led16, LOW );
  delay(t);




   digitalWrite(led8, HIGH );
  digitalWrite(led16, HIGH );
  delay(t);
  digitalWrite(led7,HIGH);
  digitalWrite(led15, HIGH );
  delay(t);
   digitalWrite(led6,HIGH);
   digitalWrite(led14, HIGH );
  delay(t);
  digitalWrite(led5,HIGH);
  digitalWrite(led13, HIGH );
  delay(t);
   digitalWrite(led4,HIGH);
  digitalWrite(led12, HIGH );
  delay(t);
 digitalWrite(led3,HIGH);
  digitalWrite(led11, HIGH );
  delay(t);
 digitalWrite(led2,HIGH);
  digitalWrite(led10, HIGH );
  delay(t);
 digitalWrite(led1,HIGH);
  digitalWrite(led9, HIGH );
  delay(t);



/////////////////////////

 digitalWrite(led1, LOW );
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led2,LOW);
  digitalWrite(led10, LOW );
  delay(t);
  digitalWrite(led3,LOW);
  digitalWrite(led11, LOW );
  delay(t);
  digitalWrite(led4,LOW);
  digitalWrite(led12, LOW );
  delay(t);
  digitalWrite(led5,LOW);
  digitalWrite(led13, LOW );
  delay(t);
  digitalWrite(led6,LOW);
  digitalWrite(led14, LOW );
  delay(t);
  digitalWrite(led7,LOW);
  digitalWrite(led15, LOW );
  delay(t);
  digitalWrite(led8,LOW);
  digitalWrite(led16, LOW );
  delay(t);




   digitalWrite(led8, HIGH );
  digitalWrite(led16, HIGH );
  delay(t);
  digitalWrite(led7,HIGH);
  digitalWrite(led15, HIGH );
  delay(t);
   digitalWrite(led6,HIGH);
   digitalWrite(led14, HIGH );
  delay(t);
  digitalWrite(led5,HIGH);
  digitalWrite(led13, HIGH );
  delay(t);
   digitalWrite(led4,HIGH);
  digitalWrite(led12, HIGH );
  delay(t);
 digitalWrite(led3,HIGH);
  digitalWrite(led11, HIGH );
  delay(t);
 digitalWrite(led2,HIGH);
  digitalWrite(led10, HIGH );
  delay(t);
 digitalWrite(led1,HIGH);
  digitalWrite(led9, HIGH );
  delay(t);




}
