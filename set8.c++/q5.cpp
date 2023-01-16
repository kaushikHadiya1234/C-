//5. WAP to create an Class Shape. Make two sub-class Circle and Triangle which implements a method from Shape class called getArea().

#include<iostream>
using namespace std;
class Shape
{
	public :
		float redius,base,hight,area=0;
		const float pi=3.14;
		
		void setdata()
		{
			cout<<"* Find Area of Circle * "<<endl;
			
			cout<<"enter the value of Redius :"<<endl;
			cin>>redius;
		}
		void setdata1()
		{
			cout<<"* Find Area of Triangle * "<<endl;
				
			cout<<"enter the value of Base :"<<endl;
			cin>>base;
			cout<<"enter the value of Hight :"<<endl;
			cin>>hight;			
		}	
};
class Circle : public Shape
{
	public : 
	
	void getArea()
	{
		setdata();
		
		area=pi*redius*redius;
		
		cout<<"Area of circle =>>"<<area<<endl;
	}
};
class Triangle : public Shape
{
	public :
	void getArea()
	{
		setdata1();
			
		area=base*hight/2;
		
		cout<<"Area of Triangle =>>"<<area<<endl;
	}
};
main()
{
	
	Circle c1;
	c1.Circle::getArea();
	
	Triangle t1;
	t1.Triangle::getArea();
}