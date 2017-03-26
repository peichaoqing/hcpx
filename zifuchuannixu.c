#include<stdio.h>
#include<string.h>
int main()
{
	char arr[20];
	gets(arr);
	int len;
	len = strlen(arr);
	int i=0,j=len-1;
	char temp;
	while(i<j)
	{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		i++;
		j--;
	}
	puts(arr);
	return 0;
}
