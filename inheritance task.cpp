#include<iostream>
using namespace std;
class cricketers
{
	public:
		void runs()
		{
			cout<<"250";
		}

};
class Batsman1
{
	public:
		void batsman1()
		{
			cout<<"\n 240";
		}
};
class Batsman2
{
	public:
		void batsman2()
		{
			cout<<"\n 260";
		}
};
class award : public Batsman1, public Batsman2
{
	public:
		void award()
		{
			cout<<"\n best performance";
			
		}
};
main()
{
	award obj1;
	obj1.runs();
	obj1.batsman1();
	obj1.batsman2();
}
