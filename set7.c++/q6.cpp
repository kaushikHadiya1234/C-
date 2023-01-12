/*
6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)

*/
#include<iostream>
using namespace std;
class A
{
	public :
		int id;
		char name[100],role[100];
		
		void read()
		{
			cout<<"Enter the Emp Id=>>>>>";
			cin>>id;
			cout<<"Enter the Emp Name=>>>>>";
			cin>>name;
			cout<<"Enter the Emp Role=>>>>>";
			cin>>role;
		}
};
class B : public A
{
	public :
		int salary,exp;
		
		void read()
		{
			cout<<"Enter the Emp Salary=>>>>>";
			cin>>salary;
			cout<<"Enter the Emp Exp=>>>>>";
			cin>>exp;
		}
};
class C : public B
{
		public :
		char comp_name[100],add[100];
		
		void read()
		{
			cout<<"Enter the Emp Comp_name=>>>>>";
			cin>>comp_name;
			cout<<"Enter the Emp Add=>>>>>";
			cin>>add;
		}
		void print()
		{
			cout<<"Name=>>>>>"<<name<<endl;
			cout<<"Role=>>>>>"<<role<<endl;
			cout<<"Salary=>>>>>"<<salary<<endl;
			
		}
};
class D : public C
{
	public :
		int contact;
		char mail[100];
		
		void read()
		{
			cout<<"Enter the Emp Contact=>>>>>";
			cin>>contact;
			cout<<"Enter the Emp Email=>>>>>";
			cin>>mail;
		}
		
		void print()
		{
			cout<<"Name=>>>>>"<<name<<endl;
			cout<<"Role=>>>>>"<<role<<endl;
			cout<<"Salary=>>>>>"<<salary<<endl;
			cout<<"Id=>>>>>"<<id<<endl;
			cout<<"Exp=>>>>>>"<<exp<<endl;
			cout<<"Comp_name=>>>>>"<<comp_name<<endl;
			cout<<"Add=>>>>>"<<add<<endl;
			cout<<"contact=>>>>>"<<contact<<endl;
			cout<<"E-mail=>>>>>>"<<mail<<endl;
		}
	
};
main()
{
	D d1;
	d1.A::read();
	d1.B::read();
	d1.C::read();
	d1.D::read();
	d1.D::print();
}
