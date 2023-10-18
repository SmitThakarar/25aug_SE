#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		string subject;
		
		void setid(int id)
		{
			this->id = id;
		}
		int getid()
		{
			return this->id;
		}
		void setname(string name)
		{
			this->name = name;
		}
		string getname()
		{
			return this->name;
		}
		void setsubject(string subject)
		{
			this->subject = subject;
		}
		string getsubject()
		{
			return this->subject;
		}
};
main()
{
	student s1;
	s1.setid(1);
	cout<<s1.getid();
	
	s1.setname("\nsmit");
	cout<<s1.getname();
	
	s1.setsubject("\njava");
	cout<<s1.getsubject();
}
