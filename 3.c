#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		if(b>c)
			printf("dadaoxiaopailie:%d\n%d\n%d",a,b,c);
		else
		printf("dadaoxiaopailie:%d\n%d\n%d",a,c,b);
	}
	else if(b>a&&b>c)
	{
		if(a>c)
			printf("dadaoxiaopailie:%d\n%d\n%d",b,a,c);
		else
		printf("dadaoxiaopailie:%d\n%d\n%d",b,c,a);
	}
	else if(c>a&&c>b)
	{
		if(b>a)
			printf("dadaoxiaopailie:%d\n%d\n%d",c,b,a);
		else
		printf("dadaoxiaopailie:%d\n%d\n%d",c,a,b);
	}
	return 0;
}
