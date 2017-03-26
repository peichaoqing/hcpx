#include<stdio.h>
int main()
{
	int N,i,sum=0;
	scanf("%d",&N);
	#if 0
	for(i=1;i<=N;i++)
	{
		sum=sum+i;
	}
	# endif
	while(N)
	{
		sum=sum+N;
		N--;
	}
	
	printf("%d\n",sum);
}
