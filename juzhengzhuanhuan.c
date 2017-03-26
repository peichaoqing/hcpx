#include<stdio.h>
#define N 5
int main()
{
	int i,j,count=1;
	int arr[N][N];

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			arr[i][j]=count++;
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(j=0;j<N;j++)
	{
		for(i=0;i<N;i++)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(j=N-1;j>=0;j--)
	{
		for(i=N-1;i>=0;i--)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
