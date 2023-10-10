#include<stdio.h>
main()
{
	int sidea,sideb,sidec;
	printf("Enter the side:");
	scanf("%d",&sidea);
	printf("Enter the side:");
	scanf("%d",&sideb);
	printf("Enter the side:");
	scanf("%d",&sidec);
	if(sidea==sideb&&sideb==sidec){
		printf("Equilateral");
	}else if(sidea==sideb||sideb==sidec||sidec==sidea){
		
		printf("Isosceles");
	}else{
		printf("Scalane");
	}
}

