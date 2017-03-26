#include<stdio.h>
int main()
{
char h;
int i,j,m=0;
	scanf("%c",&h);

		for(j=0;j<=h-'A';j++)
		{
			m=h-'A';
			for(i=h-'A'-j;i>0;i--)
			{
				printf(" ");
				
			}
			for(i=0;i<=j;i++)
			{
					printf("%c",h-m);
					m--;
			}
			for(i=j;i>0;i--)
			{
				printf("%c",h-i);
			}
			printf("\n");
		}

	
	
	return 0;
}
