#include<iostream>
using namespace std;
class College
{
	public :
		
	void data()
	{
		cout<<"hello..."<<endl;
	}
	College(College &c2)
	{
		cout<<"welcome the programing...."<<endl;
	}
	College()
	{
		cout<<"\n\n\n";
	}
};

main()
{
	College c2;
	College c1(c2);
	c1.data();
	
}
