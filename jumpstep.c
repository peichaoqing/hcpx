#include <stdio.h>
int JumpStep(int n)  
{  
	    if (n <= 0)  return 0;  
		if (n == 1 || n == 2) return n;  
			  
		return (JumpStep(n-1) + JumpStep(n-2));  
}  
  
int main(int argc, char *argv[])  
{  
	    int nStep = 0;  
		printf("请输入台阶数：");  
		scanf("%d", &nStep);  
		printf("台阶数为 %d,那么总共有 %d种跳法\n", nStep, JumpStep(nStep));  
					    return 0;  
} 
