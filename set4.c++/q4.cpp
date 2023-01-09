#include<iostream>
using namespace std;
class Highschool
{
	public :
	static	int id,rn,ss,age,sc;
	static	char name[100],institutname[100],add[100];
		
	static void setdata()
	{
		cout<<"Id => ";
		cin>>id;
		cout<<"Name => ";
		cin>>name;
		cout<<"roll number => ";
		cin>>rn;
		cout<<"standard => ";
		cin>>ss;
		cout<<"age => ";
		cin>>age;
		cout<<"contact => ";
		cin>>sc;
		cout<<"institutname => ";
		cin>>institutname;
		cout<<"Add => ";
		cin>>add;
		
	}
	
		static void getdata()
	{
		cout<<id<<"\t"<<name<<"\t"<<rn<<"\t"<<ss<<"\t"<<age<<"\t"<<sc<<"\t"<<institutname<<"\t"<<add<<endl;
		}	
};

int  Highschool::id;
int  Highschool::rn;
int  Highschool::ss;
int  Highschool::age; 
int  Highschool::sc;
char Highschool::name[100];
char Highschool::institutname[100];
char Highschool::add[100];

class college
{
	public :
	static	int id1,rn1,ss1,age1,sc1;
	static	char name1[100],institutname1[100],add1[100];
		
	static void setdata1()
	{
		cout<<"Id => ";
		cin>>id1;
		cout<<"Name => ";
		cin>>name1;
		cout<<"roll number => ";
		cin>>rn1;
		cout<<"standard => ";
		cin>>ss1;
		cout<<"age => ";
		cin>>age1;
		cout<<"contact => ";
		cin>>sc1;
		cout<<"institutname => ";
		cin>>institutname1;
		cout<<"Add => ";
		cin>>add1;
		
	}
	
		static void getdata1()
	{
		cout<<id1<<"\t"<<name1<<"\t"<<rn1<<"\t"<<ss1<<"\t"<<age1<<"\t"<<sc1<<"\t"<<institutname1<<"\t"<<add1<<endl;
		}	
};

int  college::id1;
int  college::rn1;
int  college::ss1;
int  college::age1; 
int  college::sc1;
char college::name1[100];
char college::institutname1[100];
char college::add1[100];

main()
{
	Highschool::setdata();
	Highschool::getdata();
	
    college::setdata1();
	college::getdata1();
}
