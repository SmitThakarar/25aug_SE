#include<stdio.h>
main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	if(num%5==0){
		printf("\nIt is divisible by 5");
	}else if(num%11==0){
		printf("\nIt is divisible by 11");
	}
}

