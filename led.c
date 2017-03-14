#include<stdio.h>
#include<wiringPi.h>
int main()

{
	wiringPiSetup();
	pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(0,OUTPUT);
    pinMode(2,OUTPUT);
    
    
    digitalWrite(9,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(0,HIGH);
	while(1)
{
digitalWrite(8,HIGH);
digitalWrite(2,HIGH);
delay(1000);
digitalWrite(8,LOW);
digitalWrite(2,HIGH);
digitalWrite(9,LOW);
delay(1000);
digitalWrite(8,HIGH);
digitalWrite(2,LOW);
digitalWrite(9,LOW);
delay(1000);
}
    return 0;
    
}



