#include<iostream>
using namespace std;
class Distance
{
	public:
		
		int i,f;
		
		void setData()
		{
			cout<<"feet : inch "<<endl;
			cin>>f>>i;
		}
		
		void result(Distance d2)
		{
			Distance d3;
			
			d3.f=f+d2.f;
			d3.i=i+d2.i;
			
		/*	while(d3.i>=12)
			{
				d3.i=d3.i-12;
				d3.f++;
			}
		*/
		
			d3.f=(d3.i/12)+d3.f;
			d3.i=d3.i%12;
			cout<<"feet = "<<d3.f<<endl;
			cout<<"inch = "<<d3.i<<endl;
		}	
};

main()
{
	Distance d1,d2;
	
	d1.setData();
	d2.setData();
	
	d1.result(d2);
}
