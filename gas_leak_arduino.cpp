void setup()
{
  pinMode(8, OUTPUT);//buzzer
  pinMode(9, OUTPUT);//LED
  pinMode(A0, INPUT);//GAS SENSOR
  
}

void loop()
{if(analogRead(A0)>350){
  digitalWrite(8, HIGH);
  digitalWrite(9,LOW);
}else
{digitalWrite(9, HIGH);
 digitalWrite(8,LOW);
}// Wait for 1000 millisecond(s)
}
