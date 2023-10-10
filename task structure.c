#include<stdio.h>
struct person
{
	char bankname[10];
	int acnumber;
	int acbalance;
	int atmpin;
};
main()
{
	struct person p;
	
	printf("enter bank name:");
	scanf("%s",&p.bankname);
	
	printf("\n enter ac number:");
	scanf("%d",&p.acnumber);
	
	printf("\n enter ac balance:");
	scanf("%d",&p.acbalance);
	
	printf("\n enter atm pin:");
	scanf("%d",&p.atmpin);
	
	printf("\n bankname=%s",p.bankname);
	printf("\n acnumber=%d",p.acnumber);
	printf("\n acbalance=%d",p.acbalance);
	printf("\n atmpin=%d",p.atmpin);
}
