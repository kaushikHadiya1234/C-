//1. WAP to swap elements of two integer arrays using user define function.
#include<iostream>
using namespace std;
void swap();
main()
{
	
	swap();
	
}
void swap()
{
	char a[100],b[100],c[100];
	int n,i;
	
	cout<<"enter the array size of A & B=>>";
	cin>>n;
	
	cout<<"\n=========A=========\n";
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n=========B=========\n";
	
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
  		a[i]=b[i];
		b[i]=c[i];
	}
	
	cout<<"\n=========AFTER SWAPING A=========\n";
	
   for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	} 
	
	cout<<"\n=========AFTER SWAPING A=========\n";
		
	  for(i=0;i<n;i++)
	{
		cout<<b[i]<<endl;
	} 
	
	
	
}