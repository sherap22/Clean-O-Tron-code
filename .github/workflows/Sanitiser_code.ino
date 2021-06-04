int d = 1000;
//#define ir 7
#define l1 8
#define l2 9
#define r1 10
#define r2 11
void setup() 
{
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int a= digitalRead(7);
  // put your main code here, to run repeatedly:
 if (a == 1)
 {
  digitalWrite(13, LOW);
//  move forward
  digitalWrite(l1,LOW);  
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(l2,HIGH);
 }
 if (a==0) 
 {
  digitalWrite(13,HIGH);
//  stop
  digitalWrite(l1,LOW);  
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(l2,LOW);
  delay(500);
//  turn left
  digitalWrite(l1,LOW);  
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(l2,LOW);
  delay(500);
 }
 Serial.println(a);
// cdelay(1000);
}
