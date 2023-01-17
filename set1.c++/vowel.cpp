#include<iostream>
using namespace std;

main()
{
	char ch;
	
	cout<<"enter the alphabet : "<<endl;
	cin>>ch;
	
	cout<<"your answer...."<<endl;
	
	if(ch=='a'|| ch=='A' &&
	   ch=='e'|| ch=='E' &&
	   ch=='i'|| ch=='I' &&
	   ch=='o'|| ch=='O' &&
	   ch=='u'|| ch=='U' )
	   {
	   	    cout<<"vowel"<<endl;
	   }
	else
	{
		cout<<"consonant"<<endl;
		
	 }   
}
