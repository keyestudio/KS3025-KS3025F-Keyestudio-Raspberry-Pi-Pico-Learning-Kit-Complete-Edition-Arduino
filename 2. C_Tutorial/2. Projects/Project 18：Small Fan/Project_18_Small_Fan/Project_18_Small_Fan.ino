//**********************************************************************************
/*
 * Filename    : Small Fan
 * Description : Fan clockwise rotation,stop,counterclockwise rotation,stop,cycle.
 * Auther      : http//www.keyestudio.com
*/
#define IN1 17  // the IN1 pin of the L293D
#define IN2 16  //the IN2 pin of the L293D
#define ENA 18  //the ENA pin of the L293D
void setup()
{
pinMode(IN1,OUTPUT); //set N1 to OUTPUT
pinMode(IN2,OUTPUT); //set N2 to OUTPUT
pinMode(ENA,OUTPUT); //set ENA to OUTPUT
}
void loop()
{
//rotate clockwise for 5s
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
analogWrite(ENA,250);
delay(5000);
//stop for 2s 
analogWrite(ENA,0);
delay(2000);
//rotate anticlockwise for 5s
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
analogWrite(ENA,250);
delay(5000);
//stop for 2s
analogWrite(ENA,0);
delay(2000);
}
//********************************************************************************
