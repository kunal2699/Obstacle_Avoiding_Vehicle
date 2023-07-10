const int trigPin = 11;
const int echoPin = 12;
const int in1 = 9;
const int in2 = 8;
const int in3 = 4;
const int in4 = 3;


void setup() 
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  pinMode (in3, OUTPUT);
  pinMode (in4, OUTPUT);
}
long duration, distance;

void loop()
{     
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin,HIGH);
  distance = duration/29/2;
Serial.println(distance+"cm");

  if(distance<30)
    {
      digitalWrite(in1, HIGH); 
      digitalWrite(in2, LOW); 
      digitalWrite(in3, LOW); 
      digitalWrite(in4, HIGH);
      delay(1200);
    }
    
  else
    {
      digitalWrite(in1, HIGH); 
      digitalWrite(in2, LOW); 
      digitalWrite(in3, HIGH); 
      digitalWrite(in4, LOW);
    }  
  delay(0);

}
