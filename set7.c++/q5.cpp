#include<iostream>
using namespace std;
class A 
{
 	public : 
 		int a,b;
 		void setdata()
 		{
 		cout<<"Enter the value of a & b =>>>>";
 		cin>>a>>b;
 		}
};
class B :  public A
{
	public :
		void Add()
		{
			cout<<"Addition is =>>>"<<a+b<<endl;
		}
 };
 
class C: public A
{
	public :
		void sub()
		{
			cout<<"subtraction is =>>>"<<a-b<<endl;
		}	
};
class D : public A
{
	public :
		void malti()
		{
			cout<<"Maltipication is =>>>"<<a*b<<endl;
		}	
};
class E : public A
{
	public :
		void div()
		{
			cout<<"division is =>>>"<<a/b<<endl;
		}	
};
main()
{
	B b1;
	C c1;
	D d1;
	E e1;
	
	b1.A::setdata();
	b1.Add();
	c1.A::setdata();
	c1.sub();
	d1.A::setdata();
	d1.malti();
	e1.A::setdata();
	e1.div();
}


