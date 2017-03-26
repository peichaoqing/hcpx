#include<stdio.h>
int main()
{
	int i;
	int array[3]={1,2,3};
	for(i=0;i<3;i++)
		printf("%p\n",&array[i]);
	for(i=0;i<3;i++)
		printf("%d,%d\n",sizeof(array[i]),array[i]);
	return 0;
}
