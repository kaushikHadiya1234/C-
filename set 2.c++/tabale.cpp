#include<iostream>
using namespace std;
void tabale(int a);
main()
{
	int a;
	tabale(a);
	
}
inline void tabale(int a)
{
	int i,n; 
	
	cout<<"enter the value of a :"<<endl;
	cin>>a;
	
	cout<<"maltiplication table....."<<endl;
	
	for(i=1;i<=10;i++)
	{
		cout<<a<<"*"<<i<<"="<<a*i<<endl;
	}
}
