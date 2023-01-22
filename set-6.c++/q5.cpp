#include<iostream>
using namespace std;
class College
{
	public :
		
	void data()
	{
		cout<<"hello"<<endl;
	}
	College()
	{
		cout<<"welcome the programing...."<<endl;
	}
	College(int a, int b)
	{
		cout<<"sum is :"<<a+b<<endl;
	}
	College(College &c1)
	{
		cout<<"FLUTTER DEVELOPER...."<<endl;
	}
	
	
};
main()
{
	int a,b;
	cout<<"enter the value of a & b";
	cin>>a>>b;
	
	cout<<"\n\n==========================\n\n";
	
	College c1;
	College c2(a,b);
	College c3(c1);
	
}
