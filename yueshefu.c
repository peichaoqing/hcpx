#include<stdio.h>
#define N 5
int main()
{
	int K,M,i,j,count=1,n;
	
	int arr[N],arr2[N];
	n=N;
	scanf("%d%d",&K,&M);

	for(i=0;i<n;i++)
	{
		arr[i]=count++;
	}
	for(j=0;j<N;j++)
	{
		if(M>n)
		{
			M=M%n;	
		}
		arr2[j]=arr[K+M-1];
		n--;
		printf("%d\n",arr2[j]);
	}

}
