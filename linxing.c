
#include<stdio.h>
int main()
{
	int h,i,j,k;
	scanf("%d",&h);
	
		for(j=1;j<=h;j++)
		{
			for(i=1;i<=h-j;i++)
			{
				printf(" ");
			}
			for(k=1;k<=2*j-1;k++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(j=1;j<h;j++)
		{
			for(i=h-j;i<h;i++)
			{
				printf(" ");
			}
			for(k=2*(h-j)-1;k>0;k--)
				printf("*");
			printf("\n");
		}
	
	
	return 0;
}
