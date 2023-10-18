#include<iostream>
using namespace std;
class student
{
	public:
	int id;  //data member
	string name;
	string subject;
	
	void inputdata()   // member function
	{
		cout<<"enter id:"<<endl;
		cin>>id;
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter subject:"<<endl;
		cin>>subject;
	}
	void displaydata()
	{
		cout<<"id:"<<id<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"subject:"<<subject<<endl;
	}
};
class faculty
{
	public:
		int id;
		string name;
		string department;
		
		void inputdata()
		{
			cout<<"enter faculty id:"<<endl;
			cin>>id;
			cout<<"enter faculty name:"<<endl;
			cin>>name;
			cout<<"enter faculty department:"<<endl;
			cin>>department;
		}
		void displaydata()
		{
			cout<<"id:"<<id<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"department:"<<department<<endl;
		}
		
};
main()
{
	student sobj;
	sobj.inputdata();
	sobj.displaydata();
	
	faculty fobj;
	fobj.inputdata();
	fobj.displaydata();
}

