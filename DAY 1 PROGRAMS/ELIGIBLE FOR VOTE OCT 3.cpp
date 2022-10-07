#include<stdio.h>
int main()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age>=18){
	
	printf("eligible to vote");
}
	else{
	
	printf("%d not eligigble ");
	printf("%d years to wait ",18-age);	
}
}

