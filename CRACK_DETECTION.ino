#define motor 7 // M OTOR ONE 
#define motor 6 // MOTOR ONE
#define motor 8 // MOTOR SECOND 
#define motor 9 // MOTOR SECOND
#define trig 4 //ULTRASONIC
#define echo 5 //ULTRASONIC 
#define buzzer 10 //buzzer 
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(10,OUTPUT);
  
  Serial.begin(9600);
  
}

void loop() {
  

   //ultrasonic sensor 
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

   digitalWrite(trig,HIGH);
  delayMicroseconds(10);

   digitalWrite(trig,LOW);
  delayMicroseconds(10);

  duration=pulseIn(echo,HIGH);
  distance=duration*0.034/2;

  

if (distance <=8)
{   
  Serial.println(distance);
  Serial.println("distance");
  delay(500);
  //Serial.println(distance);
  // MOTOR 1st
   digitalWrite(7,HIGH);
   digitalWrite(6,LOW);
   
   // MOTOR 2nd
   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  
  }
  if(distance >=10 )
  {
    digitalWrite(7,LOW);
   digitalWrite(6,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
    
    }
}
