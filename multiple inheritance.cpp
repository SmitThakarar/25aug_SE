#include<iostream>
using namespace std;
class papa
{
	public:
		void house()
		{
			cout<<"3 bhk";
		}
};
class kaka
{
	public:
		void  shop()
		{
			cout<<"\nkirana shop";
		}
};
class son : public papa, public kaka
{
	public:
		void car()
		{
			cout<<"\nmaruti";
			
		}
};
main()
{
	son obj1;
	obj1.house();
	obj1.shop();
	obj1.car();
}
