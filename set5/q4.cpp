#include<iostream>
using namespace std;
class Math
{
	private :
		int a,b;  
		
	friend void Add();	
};

void Add()
{
	Math m1;
	 m1.a;
	 m1.b;
	cout<<"enter the value of A & B : ";
	cin>>m1.a>>m1.b;
	
	cout<<m1.a+m1.b<<endl;
	
}
main()
{
	Add();
}