
#include<stdio.h>
int main()
{
	int N=1000,M,i,sum=0;
	int arr[10]={0,0,0,0,0,0,0,0,0,0};
	for(i=0;i<N;i++)
	{
		sum=sum+i;
		M=sum%10;
		if(M==0)
		{
			
			arr[0]=10;
		}
		else
			arr[M]=M;

	}
	for(i=0;i<10;i++)
	{
		if(arr[i]==0)
		printf("tuzi in %d anquan\n",i);
	}
	return 0;
}
#if 0
	for(i=0;i<N;i++)
	{
		printf("%d\n",arr[i]);
	}

	int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
	for(i=0;i<N;i++)
	{

		if(arr[i]==1)
			count1++;
		else if(arr[i]==2)
			count2++;
		else if(arr[i]==3)
			count3++;
		else if(arr[i]==4)
			count4++;
		else if(arr[i]==5)
			count5++;
		else if(arr[i]==6)
			count6++;
		else if(arr[i]==7)
			count7++;
		else if(arr[i]==8)
			count8++;
		else if(arr[i]==9)
			count9++;
		else if(arr[i]==10)
			count10++;
	}
	printf("%d %d %d %d %d %d %d %d %d %d",count1,count2,count3,count4,count5,count6,count7,count8,count9,count10);
	//printf("%d",arr[2]);
	return 0;
}
#endif


