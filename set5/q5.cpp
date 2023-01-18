//WAP to make Bank Management System.
#include<iostream>
using namespace std;
class Bank
{
	private :
		
		char dp[100],t[100],a[100];
		char s;
		char name[100],email[100],pn[100];
		int ac,d;
		int w,m=2000000;
		
	public:
	
		void data()
		{
			cout<<"\n\t\t\t\t\t-: BANK MANAGMENT SYSTEM :-"<<endl;
			cout<<"\t\t\t\t\t---------------------------"<<endl<<endl;
			cout<<"\t\t\t\t\t-: Designed N Programed By:-"<<endl;
			cout<<"\t\t\t\t\t----------------------------"<<endl;
			cout<<"\t\t\t\t\t     ";
			cin>>dp;
			cout<<"\n\n\t\t\t\t\t\t-: TRAINER :-"<<endl;
			cout<<"\t\t\t\t\t----------------------------"<<endl;
			cout<<"\t\t\t\t\t     ";
			cin>>t;
			cout<<"\n\t\t\t\t    Press any Key  N Enter To Continue";
			cin>>a;
			cout<<"\n\n\t\t\t ---------------------------------------------------------------"<<endl;
			cout<<"\t\t\t -: Press A To Log In As AMINISTRATOR OR S To Log In As STAFF :-";
			cout<<"\t\t\t\t\t\t ---------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t     ";		
			cin>>s;
			if(s=='S')
			{
				cout<<"\n\n\t\t\t ---------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t      -: Welkome As STAFF :-"<<endl;
				cout<<"\t\t\t ---------------------------------------------------------------"<<endl;
				cout<<"\t\t\t Enter The Name Of Staff                       : ";
				cin>>name;
				cout<<"\t\t\t Enter The Account Number (4 Digit) Of Staff   : ";
				cin>>ac;
				cout<<"\t\t\t Enter The Phonr Number Of Staff               : ";
				cin>>pn;
				cout<<"\t\t\t Enter The E-Mail Of The Staff                 : ";
				cin>>email;
				
				cout<<"\n\n\t\t\t ---------------------------------------------------------------"<<endl;
				cout<<"\t\t\t Name            :"<<name<<endl;
				cout<<"\t\t\t Account Number  :"<<ac<<endl;
				cout<<"\t\t\t Phonr Number    :"<<pn<<endl;
				cout<<"\t\t\t E-Mail          :"<<email<<endl;
				cout<<"\t\t\t ---------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\tPress [1] To Deposite The Money :"<<endl; 
				cout<<"\t\t\t\t\tPress [2] To Transfer The Money :"<<endl;
				cout<<"\t\t\t\t\tPress [3] To Witdraw The Money  :"<<endl;
				cout<<"\n\t\t\t\t\t\t\t";
				cin>>d;
				
				if(d==1)
				{
					cout<<"\n\n\t\t\t ---------------------------------------------------------------"<<endl;
					cout<<"\t\t\t\tDeposite The Money  :";
					cin>>w;
					cout<<"\t\t\t ---------------------------------------------------------------"<<endl;
					cout<<"\n\t\t\t\tYour Actual Amount Is :"<<m<<endl;
					if(w>=m)
					{
						cout<<"\n\n\t\t\t\tAmount Is Not Riqer X X X X";
					}
					else
					{
						cout<<"\n\t\t\t\tYour Amount Has Deposite Successfully ........."<<endl;
						cout<<"\n\t\t\t\tNow Your Account Balance Is :"<<m+w<<endl;
						
					}
				}
				else if(d==2)
				{
					cout<<"\n\n\t\t\t ---------------------------------------------------------------"<<endl;
					cout<<"\t\t\t\tTransfer The Money  :";
					cin>>w;
					cout<<"\t\t\t ---------------------------------------------------------------"<<endl;
					cout<<"\n\t\t\t\tYour Actual Amount Is :"<<m<<endl;
					if(w>=m)
					{
						cout<<"\n\n\t\t\t\tAmount Is Not Riqer X X X X";
					}
					else
					{
						cout<<"\n\t\t\t\tYour Amount Has Transfer Successfully ........."<<endl;
						cout<<"\n\t\t\t\tNow Your Account Balance Is :"<<m-w<<endl;
						
					}
				}
				else if(d==3)
				{
					cout<<"\n\n\t\t\t ---------------------------------------------------------------"<<endl;
					cout<<"\t\t\t\tWitdraw The Money  :";
					cin>>w;
					cout<<"\t\t\t ---------------------------------------------------------------"<<endl;
					cout<<"\n\t\t\t\tYour Actual Amount Is :"<<m<<endl;
					if(w>=m)
					{
						cout<<"\n\n\t\t\t\tAmount Is Not Riqer X X X X";
					}
					else
					{
						cout<<"\n\t\t\t\tYour Amount Has Witdraw Successfully ........."<<endl;
						cout<<"\n\t\t\t\tNow Your Account Balance Is :"<<m-w<<endl;
						
					}
				}
				else
				{
					cout<<"\n\n\t\t\t\t\t-----------------------------"<<endl;
					cout<<"\t\t\t\t\t-: X X X Wrong choic X X X :-"<<endl;
					cout<<"\t\t\t\t\t-----------------------------"<<endl;					
				}
			}
			else if(s=='A')
			{
				cout<<"\n\n\t\t\t ---------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t      -: Welkome As AMINISTRATOR :-"<<endl;
				cout<<"\t\t\t ---------------------------------------------------------------"<<endl;
			}
			else
			{
				cout<<"\n\n\t\t\t\t\t-----------------------------"<<endl;
				cout<<"\t\t\t\t\t-: X X X Wrong choic X X X :-"<<endl;
				cout<<"\t\t\t\t\t-----------------------------"<<endl;
			}
		}
};
main()
{
	Bank b1;
	b1.data();
}