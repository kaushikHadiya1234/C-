#include<iostream>
using namespace std;
class Stu
{
	private :
		char name[100],course[100];
		int id,time;
		
	public :
	
	
	    void setData()
	    {
		
		cout<<"Name = ";
		cin>>name;
		cout<<"Course = ";
		cin>>course;
		cout<<"Id = ";
		cin>>id;
		cout<<"Time = ";
		cin>>time;
	   }
	   
	   void getData()
	   {
	   	   cout<<endl<<name<<"\t"<<course<<"\t"<<id<<"\t"<<time<<"\t"<<endl;
	   }
};

main()
{
	Stu s1;
	
	s1.setData();
	
	s1.getData();
}
