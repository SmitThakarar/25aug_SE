#include<iostream>
using namespace std;
class Parent
{
	public:
		void parent()
		{
			cout<<"\n this is parent";
		}
};
class Child1 : public Parent
{
	public:
		void child1()
		{
			cout<<"\n this is first child";
		}
};
class Child2 : public Parent
{
	public:
		void child2()
		{
			cout<<"\n this is second child";
		}
};
main()
{
	Child1 c1;
	Child2 c2;
	
	c1.parent();
	c1.child1();
	
	c2.parent();
	c2.child2();
}
