#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 7
int main()
{
	int i,j,temp;
	int arr[N]={0};
	srand(time(0));
	for(i=0;i<N;i++)
		arr[i]=random()%10000;
	for(i=0;i<N;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
	for(j=i;j<N-i;j++)

	{
		if(arr[j-1]<arr[j])
		{
			temp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
		}
	}
	}
	for(i=0;i<N;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
