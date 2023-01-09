#include<iostream>
#include<string.h>
using namespace std;
class Hotel
{
	private :
		char name[100],web[100],type[100],add[100];
		int id,rat,ss,rs,ey;
		
	public :
	
	
	    void setData(char name[100],char web[100],char type[100],char add[100],	int id,int rat,int ss,int rs,int ey)
	    {
	    	strcpy(this->name,name);
	    	strcpy(this->web,web);
	    	strcpy(this->type,type);
	    	strcpy(this->add,add);
	    	this->id=id;
	    	this->rat=rat;
	    	this->ss=ss;
	    	this->rs=rs;
	    	this->ey=ey;
	    	
		
		
	   }
	   
	   void getData()
	   {
	   	   cout<<id<<"\t"<<name<<"\t"<<type<<"\t"<<ss<<"\t"<<rs<<"\t"<<ey<<"\t"<<add<<"\t"<<rat<<"\t"<<web<<endl;
	   }
};

main()
{
	Hotel h1;
	
	char name[100],web[100],type[100],add[100];
		int id,rat,ss,rs,ey;
		//id, name, type, staff_size, room_size, establish_year, address, rating_type and website
		cout<<"Id = ";
		cin>>id;
	    cout<<"Name = ";
		cin>>name;
		cout<<"Type = ";
		cin>>type;
		cout<<"Ss = ";
		cin>>ss;
		cout<<"Rs = ";
		cin>>rs;
		cout<<"Ey = ";
		cin>>ey;
		cout<<"Add = ";
		cin>>add;
		cout<<"Rat = ";
		cin>>rat;
		cout<<"Web = ";
		cin>>web;
	
	h1.setData(name,web,type,add,id,rat,ss,rs,ey);
	
	h1.getData();
}
