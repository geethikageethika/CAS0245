#include <stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	scanf("%d%d",&a,&b);
	printf("%d\n",a+b);
	p=&a;
	q=&b;
	printf("%d",*p+*q);
}

