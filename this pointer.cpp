#include<iostream>
using namespace std;
class student
{
	public:
		int a,b;
		void inputdata(int a,int b)
		{
			this->a = a;
			this->b = b;
		}
		void displaydata()
		{
			cout<<"a = "<<a;
			cout<<"\nb = "<<b;
		}
};
main()
{
	student obj;
	obj.inputdata(10,20);
	obj.displaydata();
}
