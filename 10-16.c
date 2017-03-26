#include<stdio.h>
int main()
{
	int  ch[10000];
	char ch1[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int a,i=0,j,m;
	scanf("%d",&a);
	while(a)
	{
		ch[i]=a%16;

		a/=16;
		i++;
			
	}
	for(j=i-1;j>=0;j--)
	{
		m=ch[j];
	printf("%c",ch1[m]);
	}
	printf("\n");
	return 0;
}
