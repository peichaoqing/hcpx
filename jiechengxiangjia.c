#include<stdio.h>
int main()
{
	int n,i,jiecheng=1,sum=1;
	
	scanf("%d",&n);

	if(n==0)
	{
		printf("sum=%d\n",sum);
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			jiecheng *=i;
			sum +=jiecheng;
			
		}
		printf("sum=%d\n",sum);
	}

	return 0;
}
