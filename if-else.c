#include<stdio.h>
int main()
{
	char c;
	
	c=getchar();
	if(c<32)
	printf("zheshiyigekongzhizhifu\n");
	else if(c>='0'&&c<='9')
	printf("zheshiyigeshuzhizhifu\n");
	else if(c>='A'&&c<='Z')
	printf("zheshigedaxiezimu\n");
	else if(c>='a'&&c<='z')
	printf("zheshigexiaoxiezimu\n");
	else
	printf("zheshiyigeqitazhifu\n");
	return 0;
}
