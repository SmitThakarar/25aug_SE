#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",a);
	printf("\nenter the value of b:");
	scanf("%d",b);
	printf("\n before swap a %d and b %d",a,b);
	a=a+b; //a=30 (30+20)
	b=a-b; //a=10 (30-20)
	a=a-b; //a=20 (30-10)
	printf("\n after swap a %d and b %d",a,b;)
}
