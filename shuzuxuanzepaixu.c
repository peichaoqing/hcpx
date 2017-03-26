#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 7
int main()
{
	int i,j,temp,z;
	int arr[N]={0};
	scanf("%d",z);
	srand(time(0));
	for(i=0;i<N;i++)
		arr[i]=random()%10000;
	for(i=0;i<N;i++)
	{	
		printf("%d\n"arr[i]);

		}
	for(i<0;i<N;i++)
	{

	}

	for(i=0;i<N;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
