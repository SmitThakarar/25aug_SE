#include<stdio.h>
main()
{
	float principle,rate,time;
	printf("enter the value of principle:");
	scanf("%f",&principle);
	printf("enter the value of rate:");
	scanf("%f",&rate);
	printf("enter the value of time");
	scanf("%f",time);
	printf("\n total of simple interest is %f",(principle*rate*time)/100);
}
