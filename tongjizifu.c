#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[64];
	gets(str);
	int len;
	len=strlen(str);
	int i=0;
	int count=0;
	char ch;
#if 0
	while(str[i]!='\0')
	{
		if(count==0)
		{
			ch=str[i];
			i++;
			count++;
		}
		else if(ch==str[i])
		{
			i++;
			count++;
		}
		else 
		{
			printf("ch=%c time=%d\n",ch,count);
			count=0;
		}
	
	}
	printf("ch=%c time=%d\n",ch,count);
#endif

	char str2[64];
#if 1
	int j=0;
	while(str[i]!='\0')
	{
		if(count==0)
		{
			str2[j++]=str[i];
			count++;
		}
		else if(str[i]==str2[j-1])
		{
			i++;
			count++;
		}
		else
		{
			count=0;
		}
	}
	str2[j]='\0';
	puts(str2);
	//for(i=0;i<=j;i++)
	//{
	//	printf("%c",str2[i]);
	//}
	//printf("\n");
#endif

#if 0
	int j=0;

	while(str[i]!='\0')
	{
		if(count==0)
		{
			str[j]=str[i++];
			count++;
		}
		else if(str[i]==str[j])
		{
			i++;
		}
		else
		{
			count=0;
			j++;
		}
	}
	str[j+1]='\0';
	puts(str);
#endif
	return 0;

}












