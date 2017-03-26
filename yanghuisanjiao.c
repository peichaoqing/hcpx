#include<stdio.h>
#define N 6
int main()
{
	int i=0,j=0;
	int arr[N][N]={0};
	for(i=0;i<N;i++)
	{
		arr[i][j]=1;
	}

	for(j=i;j>0;j--)
	{
		arr[i][j]=1;
		i--;
	}
	for(i=2;i<N;i++)
	{
		for(j=1;j<N-1;j++)
		{
			if(i>=j)
				arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}

	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(arr[i][j]!=0)
				printf("%4d",arr[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}
