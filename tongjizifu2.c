#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
	return *(char *)a - *(char *)b;
}
int main()
{
	char str[64];
	scanf("%s",str);
	qsort(str,strlen(str),1,cmp);
	puts(str);
	int i=0,j=0;
	int count=0;
	while(str[i]!='0')
	{
		if(count==0)
		{
			str[j++]=str[i++];
			count++;
		}
		else if(str[i]==str[j-1])
		{
			i++;
		}
		else
		{
			count=0;
		}
	}

		str[j]='\0';
		puts(str);
		return 0;
}
