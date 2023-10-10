#include<stdio.h>
#include<string.h>
main()
{
	char username[20],email[20],password[20],cpassword[20];
	
	printf("enter the username:");
	gets(username);
	
	printf("enter the email:");
	gets(email);
	
	printf("enter the password:");
	gets(password);
	
	printf("enter the cpassword:");
	gets(cpassword);
	
	if(strcmp(password,cpassword)==0)
	{
		printf("\nusername=%s",username);
		printf("\nemail=%s",email);
		printf("\npassword=%s",password);
		printf("\ncpassword=%s",cpassword);
	}
	else
	{
		printf("password and cpassword does not mached!");
	}
}
