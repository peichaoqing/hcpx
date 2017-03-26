#include<stdio.h>
int main()
{
	int a,b,i,min,yueshu;
	scanf("%d%d",&a,&b);
	min=a<b?a:b;
	for(i=1;i<=min;i++)
	{
		if(a%i==0&&b%i==0)
			yueshu=i;
		else
			continue;
	}
	printf("max yueshu=%d",yueshu);
	return 0;
}

