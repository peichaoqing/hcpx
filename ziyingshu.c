#include<stdio.h>
int main()
{
	int a,i=2;
	scanf("%d",&a);
	printf("%d=",a);
	while(a>1)
	{
		if(a%i==0)
		{
			printf(" %d",i);
			a/=i;
		}
		else
			i++;
	}
	return 0;
}
