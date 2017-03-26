#include<stdio.h>
int main()
{
	int a=1,i=0,j=0;
	while(1)
	{
	  i=a;
	while(i>0)
	{
		if(i%2==0)
		{
			i/=2;
			continue;
		}
		else if(i%3==0)
		{
			i/=3;
			continue;
		}
		else if(i%5==0)
		{
			i/=5;
			continue;
		}
		else
		{
			if(i!=1)
			{
				break;
			}
			if(i==1)
			{
				printf("%d shichoushu\n",a);
				j++;
				break;

			}
		}

	}
	a++;
	if(j==150)
	{
		break;
	}
	}
	return 0;
}
