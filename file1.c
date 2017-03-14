#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("test1.txt", "w");
	fprintf(fp,"helloworld111\n");
	fprintf(stdout,"helloworld222\n");
	fclose(fp);
	
	char str[100];
	FILE *fp2;
	fp2 = fopen("test1.txt","r");
	fscanf(fp2,"%s",str);
	printf("result:%s\n",str);
	fclose(fp2);	
		return 0;
}
