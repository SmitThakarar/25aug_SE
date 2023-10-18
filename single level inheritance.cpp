#include<iostream>
using namespace std;
class father
{
	public:
		void house()
		{
			cout<<"3 bhk house";
		}
		
};
class son: public father
{
	public:
		void car()
		{
			cout<<"\nmercedez car";
		}
};
main()
{
	son o;
	o.house();
	o.car();
}
