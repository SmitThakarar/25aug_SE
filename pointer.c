#include<stdio.h>
main()
{
	int a=10,b=20;
	int *p,*q;
	p=&a;
	q=&b;
	
	printf("the value of a is %d",a);
	printf("\nthe value of a is %x",p);
	printf("\nthe value of a is %x",&a);
	printf("\nnthe value of a is %p",p);
}
