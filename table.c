#include<stdio.h>
void main()
{
	int num,i;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
}
