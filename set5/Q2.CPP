// WAP to make Railway Reservation System.
// Requirements:
// (A) User Input Train Number , Train Name , Source , Destination , Train Time.
// (B) Display Record By Search Train Number.
// (C) Minimum 3 Input Train Record.
#include<iostream>
using namespace std;
class Reservation
{
	
	private :
		
		int train_t;
		char train_na[100],source[100],dest[100];
		
	public :	
		
		int train_n,i;
			
		void data()
		{
			cout<<"\n\n  ======nuber of trian infomation "<<i<<"========\n"<<endl;
			cout<<"Enter Train Number :";
			cin>>train_n;
			cout<<"Enter Train name :";
			cin>>train_na;
			cout<<"Enter Source :";
			cin>>source;
			cout<<"Enter Destination :";
			cin>>dest;
			cout<<"Enter Train Time :";
			cin>>train_t;
		} 
		void ans()
		{
			cout<<"\n\n=====Print Data ======\n\n";
			cout<<endl<<train_n<<endl<<train_na<<endl<<source<<endl<<dest<<endl<<train_t<<endl;
		}
};
main()
{
	Reservation r1[100];
	
	int n,i,no;
	 
	cout<<"Enter Train :";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		r1[i].data();
	}
	for(i=0;i<n;i++)
	{
		r1[i].ans();
	}
	
	cout<<"\n\nEnter Train Number For Serch :";
	cin>>no;
	
	for(i=0;i<n;i++)
	{
		if(no==r1[i].train_n)
		{
			r1[i].ans();
		}
	}
}