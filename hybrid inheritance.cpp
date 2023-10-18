#include<iostream>
using namespace std;
class Grandfather
{
	public:
		void grandfather()
		{
			cout<<"\ntwo house in mumbai";
		}
};
class Son1 : public Grandfather
{
	public:
		void son1()
		{
			cout<<"\n first house frm grand father and one car";
		}
};
class Son2 : public Grandfather
{
	public:
		void son2()
		{
			cout<<"\n second house frm grand father";
		}
};
class Grandson : public Son1
{
	public:
		void grandson()
		{
			cout<<"\n gift car frm son 1";
		}
};
main()
{
	Son1 sn1;
	Son2 sn2;
	Grandson gsn;
	
	sn1.grandfather();
	sn1.son1();
	
	sn2.grandfather();
	sn2.son2();
	
	gsn.grandson();
	
}

