//Example No 1 : Blink Example 
//Blinking only one led
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);                                     
}
void loop() {
  myBlinkFunction();
}
void myBlinkFunction(){
  digitalWrite(LED_BUILTIN, HIGH);    
  delay(1000);                       
  digitalWrite(LED_BUILTIN, LOW);               
  delay(1000);  
}

//Example No 2: Blink Example
//Bliking multiple led
int led1=9;
int led2=7;
int led3=2;
void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}
void loop(){
  myCustomLED(led1);
  myCustomLED(led2);
  myCustomLED(led3);
}
void myCustomLED(int pin){
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(1000);
}
