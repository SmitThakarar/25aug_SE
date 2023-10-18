#include<iostream>
using namespace std;
class grandfather
{
	public:
		void land()
		{
			cout<<"50 acers of land";
		}
};
class father : public grandfather
{
	public:
		void house()
		{
			cout<<"\n3 bhk house";
		}
};
class son : public father
{
	public:
		void car()
		{
			cout<<"\naudi";
		}
			
};
main()
{
	son obj;
	obj.land();
	obj.house();
	obj.car();
}
