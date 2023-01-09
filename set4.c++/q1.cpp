#include<iostream>
using namespace std;
class Emp
{
	private :
		char name[100],role[100],email[100],add[100];
		int id,salary,contact,exp;
		
	public :
	
	
	    void setData()
	    {
		cout<<"Id = ";
		cin>>id;
		cout<<"Name = ";
		cin>>name;
		cout<<"Role = ";
		cin>>role;
		cout<<"Salary = ";
		cin>>salary;
		cout<<"Exp = ";
		cin>>exp;
		cout<<"Add = ";
		cin>>add;
		cout<<"Email = ";
		cin>>email;
		cout<<"Contact = ";
		cin>>contact;
		
	   }
	   
	   void getData()
	   {
	   	   cout<<endl<<id<<"\t"<<name<<"\t"<<role<<"\t"<<salary<<"\t"<<exp<<"\t"<<add<<"\t"<<email<<"\t"<<contact<<"\t"<<endl;
	   }
};

main()
{
	Emp e1,e2,e3,e4,e5;
	
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
	
	
}
