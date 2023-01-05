#include<iostream>
using namespace std;

class Time
{
	public :
		
		int H,M,S;
		
		void setTime()
		{
			cout<<"S : "<<endl;
			cin>>S;
		}
		
		void addTime(Time T2)
		{
		    T2.S=S;
			T2.M=M+T2.S/60;
			T2.H=H+T2.M/60;
			T2.M%=60;
			T2.S%=60;
			
			
		cout<<"HH = "<<T2.H<<endl;
		cout<<"MM = "<<T2.M<<endl;
		cout<<"SS = "<<T2.S<<endl;
				
		}
		
		
};

main()
{
	Time T1,T2;
	
	T1.setTime();
	
	T1.addTime(T2);
}
