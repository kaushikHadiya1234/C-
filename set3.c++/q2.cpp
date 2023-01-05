#include<iostream>
using namespace std;

class Time
{
	public :
		
		int H,M,S;
		
		void setTime()
		{
			cout<<"H : "<<"M : "<<"S  "<<endl;
			cin>>H>>M>>S;
		}
		
		void addTime(Time T2)
		{
			Time T3;
			
			T3.S=S+T2.S;
			T3.M=M+T2.M+T3.S/60;
			T3.H=H+T2.H+T3.M/60;
			T3.M%=60;
			T3.S%=60;
			
		cout<<"HH = "<<T3.H<<endl;
		cout<<"MM = "<<T3.M<<endl;
		cout<<"SS = "<<T3.S<<endl;
				
		}
		
		
};

main()
{
	Time T1,T2;
	
	T1.setTime();
	T2.setTime();
	
	T1.addTime(T2);
}
