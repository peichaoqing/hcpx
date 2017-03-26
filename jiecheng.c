#include<stdio.h>
int main()
{
	int n,i,jiecheng=1;
	scanf("%d",&n);
	if(n==0)
		printf("%d!=%d",n,1);
	else
	{
		for(i=1;i<=n;i++)
		{
			jiecheng *=i;

		}
		printf("%d!=%d",n,jiecheng);
	}


	return 0;
}
