#include<iostream>
using namespace std;
main()
{
	int num,i,f=1;
	cout<<"enter the number:";
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	cout<<"the factorial is:"<<f;
	
}
