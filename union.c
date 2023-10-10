#include<stdio.h>
union person
{
	int age;
	char name[20];
	float salary;
};
main()
{
	union person p;
//	scanf("%d %s %f",&p.age,&p.name,&p.salary);
//	printf("age=%d\n name=%s\n salary=%f",p.age,p.name,p.salary);

	printf("enter ur age:");
	scanf("%d",&p.age);
	
	printf("\n enter ur name:");
	scanf("%s",&p.name);
	
	printf("\n enter ur salary:");
	scanf("%f",&p.salary);
	
	printf("\n age=%d",p.age);
	printf("\n name=%s",p.name);
	printf("\n salary=%f",p.salary);
}
