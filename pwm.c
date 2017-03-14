#include<stdio.h>
#include<wiringPi.h>
int main()

{
	wiringPiSetup();
	pinMode(8,OUTPUT);
    digitalWrite(8,LOW);
    softPwmCreate(9,0,100);
    softPwmCreate(7,0,100);
    softPwmCreate(0,0,100);
    
    
	while(1)
{
	softPwmWrite(9,255);
	softPwmWrite(7,0);
	softPwmWrite(0,0);

    delay(1000);
    softPwmWrite(9,0);
	softPwmWrite(7,0);
	softPwmWrite(0,0);
	delay(1000);
}
    return 0;
    
}




