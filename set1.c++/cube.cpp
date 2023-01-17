#include<iostream>
using namespace std;

main()
{
	int a[100],n,i;
	
	cout<<"enter the size of array :"<<endl;
	cin>>n;
	
	cout<<"array element....."<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*a[i]*a[i];
	}
	
	cout<<"cube of array element...."<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	

	

}
