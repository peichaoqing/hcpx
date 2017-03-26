#include<stdio.h>
int main()
{
	int N;
	int i;
	
	int array[1024]={1,1};
	scanf("%d",&N);
	for(i=2;i<N;i++)
	{
		array[i]=array[i-1]+array[i-2];
	}
	printf("%d\n",array[N-1]);
	return 0;
}
