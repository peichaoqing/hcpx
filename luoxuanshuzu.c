#include<stdio.h>
#define N 11
int main()
{
	int i=0,j=0;
	int count = 1;
	int arr[N][N]={0};
	int s;
	int n=N;
	for(s=0;s<=n/2+1;s++)
	{
	for(j;j<n-s-1;j++)
	{
		arr[i][j]=count++;
	}
		printf("%d %d\n",i,j);
	for(i;i<n-s-1;i++)
	{
		arr[i][j]=count++;
	}
		printf("%d %d\n",i,j);
	for(j;j>s;j--)
	{
		arr[i][j]=count++;
	}
		printf("%d %d\n",i,j);
	for(i;i>s+1;i--)
	{
		arr[i][j]=count++;
	}
		printf("%d %d\n",i,j);
	}

	arr[i][j]=N*N;
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(arr[i][j]!=0)
				{
					printf("%4d",arr[i][j]);
				}
				else
					printf("    ");
			}
			printf("\n");
		}
	return 0;

}		
