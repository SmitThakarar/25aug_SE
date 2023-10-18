#include<iostream>
using namespace std;
class employee
{
	public:
		string companyname;
		int companysales;
		string companyproduct;
		
		void inputdata()
		{
			cout<<"enter company name:"<<endl;
			cin>>companyname;
			cout<<"enter company sales:"<<endl;
			cin>>companysales;
			cout<<"enter company product:"<<endl;
			cin>>companyproduct;
		}
		void displaydata()
		{
			cout<<"company name"<<companyname<<endl;
			cout<<"company sales"<<companysales<<endl;
			cout<<"company product"<<companyproduct<<endl;
		}
};
class employe
{
		public:
			int  id;
			string employename;
			int employesalary;
			string employebonus;
			
			void inputdata()
			{
				cout<<"enter employe id:"<<endl;
				cin>>id;
				cout<<"enter employe name:"<<endl;
				cin>>employename;
				cout<<"enter employe salary:"<<endl;
				cin>>employesalary;
				cout<<"enter employe bonus:"<<endl;
				cin>>employebonus;
			}
			void displaydata()
			{
				cout<<"employe id"<<id<<endl;
				cout<<"employe name"<<employename<<endl;
				cout<<"employe salary"<<employesalary<<endl;
				cout<<"employe bonus"<<employebonus<<endl;
			}
				
			
			
};
main()
{
	employee cobj;
	cobj.inputdata();
	cobj.displaydata();
	
	employe eobj;
	eobj.inputdata();
	eobj.displaydata();
}

