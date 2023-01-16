/*
3. WAP which illustrate the use of Method Overriding concept.
*/
#include<iostream>
using namespace std;
class A
{
	private :
		
		int no;
		
	public :
		
		void set()
		{
			cout<<"enter the value of any number=>>"<<endl;
			cin>>no;
			
			if(no%2==0)
			{
				cout<<"your number is even"<<endl;
			}
			else
			{
				cout<<"your number is odd"<<endl;
			}
			
			cout<<"\n===============================\n";
		}
};
class B
{
	private :
		
		int year;
		
	public :
		void set()
		{
			cout<<"enter the  any year;"<<endl;
			cin>>year;
			
			if(year%4==0)
			{
				cout<<"your year is leap year"<<endl;
			}
			else
			{
				cout<<"your year is not leap year"<<endl;
			}
			
		}
};
main()
{
	A a1;
	a1.set();
	
	B b1;
	b1.set();
}
