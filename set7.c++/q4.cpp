/*
4. WAP to read and print employee information using multiple inheritance.
*/
#include<iostream>
using namespace std;
class Id
{
	public :
		int id;
		
		void read()
		{
			cout<<"Emp ID=>>>>";
			cin>>id;
		}
};
class Name
{
	public :
		char name[100];
		void read()
		{
			cout<<"Emp Name=>>>>";
			cin>>name;	
		}
};
class Salary
{
	public :
		int salary;
		void read()
		{
			cout<<"Emp salary=>>>>";
			cin>>salary;
		}
};


class Emp : public Id,public Name,public Salary
{
	public :
		void print()
		{
			cout<<"Emp ID=>>>>"<<id<<endl;
			cout<<"Emp Name=>>>>"<<name<<endl;
			cout<<"Emp Salary=>>>>"<<salary<<endl;
		}
};
main()
{
	Emp e1;
	e1.Id::read();
	e1.Name::read();
	e1.Salary::read();
	e1.Emp::print();
}
