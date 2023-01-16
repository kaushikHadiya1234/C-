/*
3. WAP which illustrate the use of Method Overriding concept.
*/
#include<iostream>
using namespace std;
class A
{
	public :
		
		void set()
		{
			cout<<"hadiya ";
		}
};
class B
{
	public :
		void set()
		{
			cout<<"kaushik"<<endl;
		}
};
main()
{
	A a1;
	B b1;
	
	a1.set();
	b1.set();
}
