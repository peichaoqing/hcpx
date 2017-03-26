#include<stdio.h>
int main()
{
	int ch[10000];
	int a,i=0,j=0;
	scanf("%d",&a);
	while(a)
	
	{
		ch[i]=a%2;
		a/=2;
		i++;
			
	}
	for(j=i-1;j>=0;j--)
	{
	printf("%d",ch[j]);
	}
	printf("\n");
	return 0;
}
