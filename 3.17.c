#include<stdio.h>
#include<string.h>

int main()
{
	int i,j=0;
	//char *p1,*p2;
	char *p="adfhsdkjhuwehasdfqu";
	char str[64]={0};
	strcpy(str,p);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!='f')
		{
			str[j++]=str[i];
		}
	}
	str[j]='\0';
		printf("%s\n",p);
		printf("%s\n",str);
	return 0;
}
