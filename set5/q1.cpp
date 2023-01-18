//1. WAP to create a class for student to get and print details of N students. (with use of array of objects)
#include<iostream>
using namespace std;
class Student
{
	public :
		char name[100],cours[100];
		int id;
		
		void setdata()
		{
			cout<<"Enter the student Id =>>";
			cin>>id;
			cout<<"Enter the student Name =>>";
			cin>>name;
			cout<<"Enter the student Cours =>> =>>";
			cin>>cours;
		}
		
		void getdata()
		{
			cout<<"Id=>>"<<id<<endl<<"Name=>>"<<name<<endl<<"Cours=>>"<<cours<<endl;
		}
};
main()
{
	Student s[100];
	int n,i;
	
	cout<<"Enter the nubmer of student data =>> ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i].setdata();
	}
	for(i=0;i<n;i++)
	{
		s[i].getdata();
	}
	
}