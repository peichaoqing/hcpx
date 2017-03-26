#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	gets(str);
	int len;
	len = strlen(str);
	int i=0,j=len-1;
	int flag=1;
	while(i<j)
	{
		if(str[i]==str[j])
		{
			i++;
			j--;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("This is huiwen\n");
	}
	else
	{
		printf("This isn't huiwen\n");
	}

	return 0;
}
