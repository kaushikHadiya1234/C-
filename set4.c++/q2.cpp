#include<iostream>
#include<string.h>
using namespace std;
class Read
{
		
	public :
	
		char name[100],course[100];
		int id,time;
	
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
	   
	  
};
class Print
{
	public :	
	
		
	 void getData(Read r1)
	   {
	   	   cout<<endl<<r1.name<<"\t"<<r1.course<<"\t"<<r1.id<<"\t"<<r1.time<<"\t"<<endl;
	   }
};

main()
{
	Read r1;
	Print p1;
	
	r1.setData();
	
	p1.getData(r1);
}
