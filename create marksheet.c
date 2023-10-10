#include<stdio.h>
void main()
{
	float DSA,ADA,DCS,OOPM,COA;
	float total,percentage;
	printf("Enter the marks of DSA :");
	scanf("%f",&DSA);
	printf("\nEnter the marks of ADA :");
	scanf("%f",&ADA);
	printf("\nEnter the marks of DCS :");
	scanf("%f",&DCS);
	printf("\nEnter the marks of OOPM :");
	scanf("%f",&OOPM);
	printf("\nEnter the marks of COA :");
	scanf("%f",&COA);
	total=DSA+ADA+DCS+OOPM+COA;

percentage=total/5;
	
	printf("\n");
	
	if(percentage>=90){
		printf("Distinction");
	}else if(percentage>=79){
		printf("First class");
	}else if(percentage>=69){
		printf("Second class");
	}else if(percentage>=50){
		printf("Third class");
	}else if(percentage<40){
		printf("Fail");
	}
	printf("\n");
	printf("\nThe Total marks is:  \t%.2f / 500.00\n", total);
    printf("\nThe Percentage is:   \t%.2f%%\n", percentage);
}
