#include<stdio.h>
int main()
{
	int p,q,r,i,c=0;
	printf("Enter P :");
	scanf("%d",&p);
	printf("Enter Q :");
	scanf("%d",&q);
	printf("Enter R :");
	scanf("%d",&r);
	for(i=p;i<=q;i++)
	{
		if(c!=r)	
		{
			printf("%d  ",i);
			c++;
		}
		else
		{
			c++;
			continue;
		}
	}
	return 0;
}


