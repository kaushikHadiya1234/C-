//5. WAP to create an Class Shape. Make two sub-class Circle and Triangle which implements a method from Shape class called getArea().

#include<iostream>
using namespace std;
class Shape
{
	public :
		float redius,base,hight,area=0;
		const float pi=3.14;
		
		virtual void getArea()=0;
};
class Circle : public Shape 
{
	public : 
	
	void getArea()
	{
		cout<<"* Find Area of Circle *\n\n "<<endl;
		
		cout<<"enter the value of Redius =>>";
		cin>>redius;
		
		area=pi*redius*redius;
		
		cout<<"Area of circle =>>"<<area<<endl;
	}
};
class Triangle : public Shape
{
	public :
	void getArea()
	{
	    cout<<"\n\n* Find Area of Triangle *\n\n "<<endl;
				
		cout<<"enter the value of Base =>>";
		cin>>base;
		cout<<"enter the value of Hight =>>";
		cin>>hight;
			
		area=base*hight/2;
		
		cout<<"Area of Triangle =>>"<<area<<endl;
	}
};
main()
{
	Shape *s,*s1;
	Circle c1;
	
	s=&c1;
	
	s->getArea();
	
	Triangle t1;
	
	s1=&t1;
	
	s1->getArea();
	
	
}
