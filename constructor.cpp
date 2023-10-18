#include<iostream>
using namespace std;
class student
{
	public:
		student()  // default constructor
		{
			cout<<"welcome to the constructor\n";	
		}
		student(int a,int b) // parameterized constructor
		{
			cout<<"\n a = "<<a;
			cout<<"\n b = "<<b;
		}
};
main()
{
	student s1;
	student s2(10,30);
}
