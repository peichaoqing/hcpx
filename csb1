#include <stdio.h>
#include <wiringPi.h>
#include <sys/time.h>
int main()
{
	wiringPiSetup();
	pinMode(8,OUTPUT);
	pinMode(9,INPUT);
	while(1)
	{
		digitalWrite(8,LOW);
		digitalWrite(8,HIGH);
		delayMicroseconds(10);
		digitalWrite(8,LOW);


		while(!(digitalRead(9) ==1));
		printf("1\n");
		while(!(digitalRead(9) ==0));
		printf("2\n");
		}
		dealy(2000);
}
