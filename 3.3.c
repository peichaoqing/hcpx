#include<stdio.h>
#include<stdlib.h>
int main()

{
	int i;
	int str[10];
	//gets(str);
	for(i=0;i<10;i++)
	{
		scanf("%d",&str[i]);
	}
	int max=str[0];
	for(i=1;i<10;i++)
	{
		if(max<str[i])
		{
			max=str[i];
		}

	}
	int sum=0,net;
	for(i=0;i<10;i++)
	{
		sum+=str[i];
	}
	net=sum/10;
	int j,temp;
	for(j=0;j<10;j++)
	{
	for(i=1;i<10-j;i++)
	{
		if(str[i-1]<str[i])
		{
			temp=str[i-1];
			str[i-1]=str[i];
			str[i]=temp;
		}
	}
	}


	for(i=0;i<10;i++)
	{
	printf("%d ",str[i]);
	}
	printf("\n");
	printf("max=%d,sum=%d,net=%d\n",max,sum,net);
		return 0;
}
