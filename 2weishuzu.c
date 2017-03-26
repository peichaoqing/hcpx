#include<stdio.h>
int main()
{
	//int arr[3][4]={3,4,7,32,76,22,534,11,23,456,21,66};
	int arr[3][4];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[j][i]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 0;
}
