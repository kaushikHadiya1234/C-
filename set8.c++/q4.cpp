//4. WAP to demonstrate usage of Virtual Function.
#include<iostream>
using namespace std;
class Math
{
	public :
	
		int no;
		
		virtual void data();	
};
class Math1 : public Math
{
	public :
		
		void data()
		{
			cout<<"Enter The Value of Number : "<<endl;
			cin>>no;
			
			if(no%2==0)
			{
				cout<<"your number is even"<<endl;
			}
			else
			{
				cout<<"your number is odd"<<endl;	
			}	
		}
};
main()
{
	Math1 m1;
	m1.data();
	
}