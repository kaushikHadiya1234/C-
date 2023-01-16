/*
2. WAP to create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, 
respectively. Create a main( ) that makes an object of your class and calls each of the member functions.
 Now modify the class so it has instead a single member function with all the arguments defaulted.
*/
#include<iostream>
using namespace std;
class Member
{
	public :
		
		void read()
		{
			cout<<"\t*****C language*****"<<endl;
		}
		
		void read(int a)
		{
			cout<<"\t*****C++ language*****"<<endl;
		}
		
		void read(int a,int b)
		{
			cout<<"\t*****Core Flutter*****"<<endl;
		}
		
		void read(int a,int b,int c)
		{
			cout<<"\t*****Advance Flutter*****"<<endl;
		}		
};
main()
{
	Member m1;
	m1.read();
	m1.read(1);
	m1.read(1,2);
	m1.read(1,2,3);
}
