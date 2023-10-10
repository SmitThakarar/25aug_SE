#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("enter s1:");
	gets(s1);
	printf("enter s2:");
	gets(s2);
	if(strcmp(s1,s2)==0)
	{
		printf("both the string are same");
	}
	else
	{
		printf("both the string are not same");
	}
}
