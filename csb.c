#include <stdio.h>
#include <wiringPi.h>
#include <sys/time.h>
int main()
{
	wiringPiSetup();
	pinMode(8,OUTPUT);
	pinMode(9,INPUT);
	
	
	int val ;
	while(1)
	{
		digitalWrite(8,LOW);
		digitalWrite(8,HIGH);
		delayMicroseconds(10);
		digitalWrite(8,LOW);
		
		struct timeval start,end;
		
		while(1)
		{
			val = digitalRead(9);
			if(val == HIGH)
			{
				printf("start\n");
				break;
			}	
			else
			continue;
		}
		//time1
		gettimeofday(&start,NULL);
		while(1)
		{
			val = digitalRead(9);
			if(val == LOW)
			{
				printf("end\n");
				break;
			}	
			else
			continue;
		}
		//time2
		gettimeofday(&end,NULL);
		
		long t1 = start.tv_sec * 1000000 + start.tv_usec;
		long t2 = end.tv_sec * 1000000 + end.tv_usec;
		
		float dis = (float)(t2-t1)/1000000 * 34000/2;
		printf("%fcm\n",dis);
		delay(2000);
		
	}
	
	
	
	//int flag=0;
	/*while(1)
	{
		val = digitalRead(9);
		if(val == 1 & flag == 0)
		{
			printf("high\n");
			 flag=1;
			}
			if(val == 0 & flag==1)
		{
			printf("low\n");
			break;
			}
		}*/
		/*while(!(digitalRead(9) ==1));
		printf("1\n");
		while(!(digitalRead(9) ==0));
		printf("2\n");*/
			return 0;
}
		

	
