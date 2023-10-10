#include<stdio.h>
int print1to_10(int x)
{
	if(x<=10)
	{
		printf("\n%d",x);
		print1to_10(x+1);
	}
}
main()
{
	print1to_10(1);
}
