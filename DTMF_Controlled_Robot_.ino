#define m1 6
#define m2 7
#define m3 8
#define m4 9

#define D1 5
#define D2 4
#define D3 3
#define D4 2

void forward()
{
   digitalWrite(m1, LOW);
   digitalWrite(m2, HIGH);
   digitalWrite(m3, LOW);
   digitalWrite(m4, HIGH);
}

void backward()
{
   digitalWrite(m1, HIGH);
   digitalWrite(m2, LOW);
   digitalWrite(m3, HIGH);
   digitalWrite(m4, LOW); 
}

void left()
{
   digitalWrite(m1, HIGH);
   digitalWrite(m2, LOW);
   digitalWrite(m3, LOW);
   digitalWrite(m4, HIGH);
}

void right()
{
   digitalWrite(m1, LOW);
   digitalWrite(m2, HIGH);
   digitalWrite(m3, HIGH);
   digitalWrite(m4, LOW);
}

void Stop()
{
   digitalWrite(m1, LOW);
   digitalWrite(m2, LOW);
   digitalWrite(m3, LOW);
   digitalWrite(m4, LOW);

}

void setup() 
{
  pinMode(D4, INPUT);
  pinMode(D4, INPUT);
  pinMode(D4, INPUT);
  pinMode(D4, INPUT);
Serial.begin(9600);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
}

void loop() 
{

  int temp1=digitalRead(D1);
  int temp2=digitalRead(D2);
  int temp3=digitalRead(D3);
  int temp4=digitalRead(D4);
  Serial.println(digitalRead(9));
 
  if(temp1==0 && temp2==1 && temp3==0 && temp4==0)
left();
  else if(temp1==0 && temp2==0 && temp3==1 && temp4==0)
 forward();
  else if(temp1==0 && temp2==1 && temp3==1 && temp4==0)
  right();

  else if(temp1==0 && temp2==1 && temp3==0 && temp4==1)
  Stop();
  
   else if(temp1==1 && temp2==0 && temp3==0 && temp4==0)
    backward();
}


