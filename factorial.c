#include<stdio.h>
void main()
{
	int num,i,f=1;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;  //1*2*3*4*5
	}
	printf("\n factorial=%d",f);
}
