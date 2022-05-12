#include<Servo.h>
int A = 12;
int B = 13;
int C = 8;
int D = 7;
int E = 6;
int F = 11;
int G = 10;
int DP = 9;
Servo mt;
int andar = 1;
int LED=1;
int LED1=2;
int LED2=3;
int LED3=4;

int bt1=0;
int bt2=0;
int bt3=0;
int bt4=0;
int bt=0;

void setup(){
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);   
  mt.attach(5);
  mt.write(0);
  Serial.begin(9600);
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
 
}
void loop(){
  Serial.println(andar);
  bt=digitalRead(A0);  
  bt1=digitalRead(A1);
  bt2=digitalRead(A2);
  bt3=digitalRead(A3);
  bt4=digitalRead(A4);
  
  if(andar==1){
   
    digitalWrite(A, 1);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 1);
    digitalWrite(E, 1);
    digitalWrite(F, 1);
    digitalWrite(G, 1);
    digitalWrite(DP, 1);
    mt.write(0);
  }
    if(andar==2){

    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 1);
    digitalWrite(D, 0);
    digitalWrite(E, 0);
    digitalWrite(F, 1);
    digitalWrite(G, 0);
    digitalWrite(DP, 1);
      mt.write(90);
  }
    if(andar==3){

    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
    digitalWrite(E, 1);
    digitalWrite(F, 1);
    digitalWrite(G, 0);
    digitalWrite(DP, 1);
      mt.write(180);
  }
  digitalWrite(LED1, 0);
  digitalWrite(LED2, 0);
  digitalWrite(LED3, 0);

  if(LED==1){
   digitalWrite(LED1, 1);
  }
  if(LED==2){
   digitalWrite(LED2, 1);
  }
  if(LED==3){
   digitalWrite(LED3, 1);
  }
  
  
  if(bt==1){
    LED++;
    delay(50);
    if(LED>3){
      LED=2;
    }
    
  }
   if(bt1==1){
    LED=3;
   }
    if(bt2==1){
    LED=1;    
  }
   if(bt3==1){
    LED--;
    delay(50);
    if(LED<1){
      LED=2;
    }
    
  }
   if(bt4==1){
     if(andar==1){
     while(LED != andar){
       andar++;
       delay(300);
    
     }
     }   
      if(andar==2){
        if(LED==3){
          andar=3;
          delay(50);
        }
         if(LED==1){
          andar=1;
          delay(50);
        }
     }
       if(andar==3){
     while(LED != andar){
       andar--;
       delay(300);
    
     }
}
    
   }  
}