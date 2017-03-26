#include<stdio.h>
int main()
{
	int i,num;
	scanf("%d",&num);
	i=2;
	#if 0
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		break;
		else
		continue;
	}
	#endif
	while(i<num)
	{
		
			if(num%i==0)
			break;
			
			else
			{i++;
			continue;
		}
			
	}
	if(num==i)
	printf("%d is zhishu",num);
	else
	printf("%d isn't zhishu",num);
	
	return 0;
}
