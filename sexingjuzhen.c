#include<stdio.h>
#include<stdlib.h>
#define N 7
int main()
{
	
	int arr[N][N]={0};
	int k,i=0,j=0;
	int count=1;
	arr[0][0]=count;
	for(k=1;k<N;k++)
	{
		j=0;
		for(i=k;i>=0;i--)
		{
			arr[i][j]=++count;
			j++;
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(arr[i][j]>0)
			{
				printf("%3d",arr[i][j]);

			}
			else
				printf("  ");
		}
		printf("\n");
	}
}
