#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,g,s,b,q,w;
	for(n=10000;n<100000;n++)
	{
		w=n/10000;
		q=(n-w*10000)/1000;
		b=(n-w*10000-q*1000)/100;
		s=(n-w*10000-q*1000-b*100)/10;
		g=n%10;
	    if(w*w*w*w*w*w+q*q*q*q*q+b*b*b*b*b+s*s*s*s*s+g*g*g*g*g==n)
		printf("%d\n",n);
	}
	return 0;
}
