#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[5][5];
	int i,j,count=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			//arr[i][j]=count++;
			scanf("%d",&arr[i][j]);	
		}
	}
	int min;
	int arr1[5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			min=arr[i][0];
			arr1[i]=0;
			if(min>arr[i][j])
			{
				min=arr[i][j];
				arr1[i]=j;
			}
		}
	}
	int arr2[5];
	int max;
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			max=arr[0][j];
			arr2[i]=0;
			if(max<arr[i][j])
			{
				max=arr[i][j];
				arr2[j]=i;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		if(arr[arr1[i]][i]==arr[i][arr2[i]])
		{
			printf("this shuzhen have maanshu is %d in (%d,%d)\n",arr[arr1[i]][arr2[i]],arr1[i],arr2[i]);
		}
#if 0
		else
		{
			printf("this shuzhen haven't maanshu!\n");
		}
#endif
		}
#if 0
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%4d",arr[i][j]);	
		}
		printf("\n");
	}
#endif
	return 0;
}
