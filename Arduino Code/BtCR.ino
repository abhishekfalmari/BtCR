char val; 
int a1= 2; 
int a2= 3;
int b1= 4;
int b2= 5;

void setup() {

  pinMode(a1, OUTPUT);  
  pinMode(a2, OUTPUT);  
  pinMode(b1, OUTPUT); 
  pinMode(b2, OUTPUT);  
  
  Serial.begin(9600);
  Serial1.begin(9600);       

}

void loop() {

  if( Serial1.available() >0 )       
  {
    val = Serial1.read(); 
    Serial.println(val);     
  }
  if( val == 'F' )               
  {
    digitalWrite(a1, HIGH);  
    digitalWrite(a2, LOW);
    digitalWrite(b1, HIGH);  
    digitalWrite(b2, LOW);
    Serial.println("Forward"); 
  }
      
  else if( val == 'B')
  {
    digitalWrite(a1, LOW);  
    digitalWrite(a2, HIGH);
    digitalWrite(b1, LOW);  
    digitalWrite(b2, HIGH); 
    Serial.println("Backward");
  }
  else if( val == 'R' )               
  {
    digitalWrite(a1, HIGH);  
    digitalWrite(a2, LOW);
    digitalWrite(b1, LOW);  
    digitalWrite(b2, HIGH); 
    Serial.println("Right");
  }
  else if( val == 'L' )               
  {
    digitalWrite(a1, LOW);  
    digitalWrite(a2, HIGH);
    digitalWrite(b1, HIGH);  
    digitalWrite(b2, LOW);  
    Serial.println("Left");
  }
  else if( val == 'S' )               
  {
    digitalWrite(a1, LOW);  
    digitalWrite(a2, LOW);
    digitalWrite(b1, LOW);  
    digitalWrite(b2, LOW); 
    Serial.println("Stop"); 
  } 
} 
