#include<stdio.h>
#include<wiringPi.h>
int main()

{
	wiringPiSetup();
	int a[8]={8,2,3,12,13,14,30,21};
	int col[]={9,7,0};
	int i=0;
	int j=0;
	pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(0,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT); 
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
    pinMode(14,OUTPUT);
    pinMode(30,OUTPUT);
    pinMode(21,OUTPUT);
    
    
    digitalWrite(9,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(0,HIGH);
	while(1)
{
	digitalWrite(8,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
digitalWrite(14,HIGH);
digitalWrite(30,HIGH);
digitalWrite(21,HIGH);
//digitalWrite(9,LOW);
for(j=0;j<3;j++)
{
	digitalWrite(col[j],LOW);
	
	for(i=0;i<8;i++)
	{
		digitalWrite(a[i],LOW);
		delay(300);
		/*digitalWrite(a[i],HIGH);
		delay(100);*/
	}
	
	for(i=0;i<8;i++)
	{
		digitalWrite(a[8-i],HIGH);
		delay(300);
	}
	digitalWrite(col[j],HIGH);	
}
	
       

    



}
    return 0;
    
}




