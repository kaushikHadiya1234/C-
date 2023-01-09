#include<iostream>
using namespace std;
void fact(int a);
main()
{
	int a;
	fact(a);
}

void fact(int a)
{
	int n,sum=1,i;
	
	cout<<"enter the number :"<<endl;
	cin>>n;
	
	for(i=n;i>=1;i--)
	{
		sum=sum*i;
	}
	
	cout<<sum;
}
