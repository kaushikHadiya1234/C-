/*
1. WAP to create a Message class with a constructor that takes a single string with a default value.
 Create a private member string, and in the constructor simply assign the argument string to your internal string. 
 Create two overloaded member functions called print( ): 
 one that takes no arguments and simply prints the message stored in the object, 
 and one that takes a string argument, which it prints in addition to the internal message.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Message
{
	private :
		char m[100];
		
	public :
		char m1[100];
		
		 Message()
		 {
		 	cout<<"enter the string";
		 	cin>>m1;
		 strcpy(m,m1);
		 }
		 
		 
		 void print()
		 {
		 	cout<<"\n\n";
		 }
		 void print(int a)
		 {
		 	cout<<"public string =>>"<<m1<<endl<<"internal string =>>"<<m<<endl;
		 }
		 
};
main()
{
	Message m1;
	m1.print();
	m1.print(10);
	
}

