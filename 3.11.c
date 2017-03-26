#include<stdio.h>
#include<time.h>

int main()
{
	int i;
	int str[20];
   	srand(time(0));
	for(i=0;i<20;i++)
	{
		str[i]=rand()%1000;
	}
	int j;
	int temp=0;
	for(i=0;i<20;i++)
	{
	for(j=1;j<20-i;j++)
	{
		if(str[j-1]>str[j])
		{
			temp=str[j-1];
			str[j-1]=str[j];
			str[j]=temp;
		}
	}
	}	
	for(i=0;i<20;i++)
	{
		printf("%d\n",str[i]);
	}
}
