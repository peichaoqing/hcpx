#include<stdio.h>
#include<string.h>
int main()
{
	char str[64];
	gets(str);
	int i,cnt1=0,cnt2=0,cnt3=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			cnt1++;
		}
		else if(str[i]>=97&&str[i]<=122)
		{
			cnt2++;
		}
		else if(str[i]>=48&&str[i<=57])
		{
			cnt3++;
		}
	}
	printf("capital have %d,lowercase have %d,shuzi have %d\n",cnt1,cnt2,cnt3);
	return 0;
}
