#include<iostream>
using namespace std;
main()
{
	char a[100];
	int i,n;
	
	cout<<"Enter the string =>>";
	cin>>a;
	
	for(i=0;i<=a[i];i++)
   {
	   if(a[i]>='a'&& a[i]<='z')
	   {
	   	   a[i]-=32;
	   	   
	   	   
	   }
	   else if(a[i]>='A'&& a[i]<='Z')
	   {
	   	   a[i]+=32;
	   }
   }
   
    cout<<" After togal =>>"<<a;
}
