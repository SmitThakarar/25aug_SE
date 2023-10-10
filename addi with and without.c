#include<stdio.h>
void sum(int a,int b)
{
	int result;
	result=a+b;
	printf("the addition of a and b is %d",result);
}
main()
{
	int a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
