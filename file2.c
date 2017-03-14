#include <stdio.h>

int main()
{
	char str;
	int ret;
	FILE *fp1;
	FILE *fp2;
	fp1 = fopen("test1.txt","r");
	fp2 = fopen("test.txt","w");
	while(1)
	{
		ret = fscanf(fp1,"%c",&str);
		if(ret<=0)
		
		break;
		
		
		
		
		
		fprintf(fp2,"%c",str);	
		
	}		
	fclose(fp1);
	fclose(fp2);	
		return 0;	
	}
	
	

