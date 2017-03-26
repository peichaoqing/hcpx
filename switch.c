#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	switch (num/10)
	{
		case 10:
		case 9:printf("youxiu\n");
		break;
		case 8:printf("lianghao\n");
		break;
		case 7:
		printf("zhongdneg\n");
		break;
		case 6:
		printf("jige\n");
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
		printf("bujige\n");
		break;
		default:
		printf("error\n");
	}
	return 0;
	
}
