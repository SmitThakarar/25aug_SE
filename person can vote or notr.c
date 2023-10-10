#include<stdio.h>
main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	if(age>=18){
		printf("\nYou are eligible for vote");
	}else{
		printf("\nYou are not eligible for vote");
	}
}

