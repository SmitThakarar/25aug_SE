#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("enter s1:");
	gets(s1);
	
	strcpy(s2,s1);
	strrev(s2);
	
	if(!strcmp(s1,s2))
	{
		printf("string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
}

