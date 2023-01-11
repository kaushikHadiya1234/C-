/*
1. WAP that defines a shape class with a constructor that gives value to width and height. 
The define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
 In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

*/
#include<iostream>
using namespace std;
class Shape
{
	public :
		int w,h;
		Shape()
		{
		cout<<"Enter the valuer of w & h ";
		cin>>w>>h;
			
		}
		
};
class Triangle : public Shape
{
	public : 
	 
	 void shape_area()
	 {
	 	cout<<"area of triangle =>>>"<<w*h/2<<endl;
	 }
	
};
class rectangle : public Shape
{
	public : 
	 
	 void shape_area()
	 {
	 	cout<<"area of rectangle =>>>"<<w*h<<endl;
	 }
	
};

main()
{
	Triangle t1;
	t1.shape_area();
	rectangle r1;
	
	r1.shape_area();
}
