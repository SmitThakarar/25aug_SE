#include<stdio.h>
main()
{
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	if(age>=18){
		printf("You are eligible for license");
	}else{
		printf("You are not eligible for license");
	}
}
