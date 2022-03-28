int led = 13;
int input;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()>0){
    input=Serial.read();
    
    if (input=='a'){
      digitalWrite(led, HIGH);
      
    }
    else if(input=='y')
    {
      digitalWrite(led, LOW);
     
    }
    
  } 
}
