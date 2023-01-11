#include<iostream>
using namespace std;
class College
{
	public :
		
	void data()
	{
		cout<<"Hello.."<<endl;
	}
	College(int a, int b)
	{
		cout<<"sum is :"<<a+b<<endl;
	}
};
main()
{
	int a,b;
	cout<<"enter the value of a & b";
	cin>>a>>b;
	College c1(a,b);
	c1.data();
}
