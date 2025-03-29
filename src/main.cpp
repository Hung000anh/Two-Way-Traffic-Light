#include <Arduino.h>

void setup(){
  for (int i = 0; i < 13; i++) {
     pinMode(i, OUTPUT);
}
}
void displaynumber(int i) {
if (i == 0){
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW); 
  
}else if(i == 1){
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
}else if(i == 2){
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
}else if(i == 3){
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}else if(i == 4){
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
}
}            
void loop(){
  // for (int i =5; i >= 0; i--)
  // {
  //   displaynumber(i);
  //   digitalWrite(8, HIGH);  
  //   delay(1000);
  // }
  // digitalWrite(8, LOW);
  // for (int i =2; i >= 0; i--)
  // {
  //   displaynumber(i);
  //   digitalWrite(9, HIGH);  
  //   delay(1000);
  // }
  // digitalWrite(9, LOW); 

  // for (int i =3; i >= 0; i--)
  // {
  //   displaynumber(i);
  //   digitalWrite(10, HIGH);  
  //   delay(1000);
  // }
  // digitalWrite(10, LOW); 

for (int i = 5;i>=0;i--) { //Đèn đỏ ngang bật 5s
  displaynumber(i);
  digitalWrite(8, HIGH);  
  digitalWrite(13, HIGH); 
  if(i == 0)
  {
    digitalWrite(12, HIGH); 
    digitalWrite(13, LOW); 
  }
  delay(1000);
}
for (int i = 5;i>=0;i--) { 
  displaynumber(i);
  digitalWrite(12, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(11, HIGH); 


  digitalWrite(10, HIGH); 
  if(i == 0)
  {
    digitalWrite(9, HIGH); 
    digitalWrite(10, LOW); 
  }
  
  delay(1000);
}
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
}