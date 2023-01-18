// WAP to make Supermarket Billing System.
// Requirements:
// (A) Verify User Id And Password
// (B) User Input Item Number , Item Name , Quantity , Tax , Discount.
// (C) Display All Record In Ascending order (by item Number)
#include<iostream>
using namespace std;
class vr
{
	private :
		
		int id=1234,pas=123456;
		int uid,upas;
		
		int quantity,tax,discount;
		char item_na[100];
		
	public :
		
		int item_n;
		
		int login()
		{
			cout<<"\nEnter the ID :";
			cin>>uid;
			cout<<"Enter the Password :";
			cin>>upas;
			
			if(id==uid && pas==upas)
			{
	        cout<<"\n\n======= Login Succesfuly ======\n\n";
				return 1;
			}
			else
			{
				cout<<"\n\n X X X X Wrong ID & Password X X X X";
				cout<<"\n\n======= Plise Trye Again =======\n\n";
				return 0;
			}
		}
		void product()
		{
			cout<<"\n\n ======= Enter the data =======\n\n";
			cout<<"\nEnter Item No :";
			cin>>item_n;
			cout<<"Enter Item Name :";
			cin>>item_na;
			cout<<"Enter Quantity :";
			cin>>quantity;
			cout<<"Enter Tax :";
			cin>>tax;
			cout<<"Enter Discount :";
			cin>>discount;
		}
		void ans()
		{
			cout<<"\n\n ====== print the data =======\n\n";
			cout<<endl<<item_n<<"     "<<item_na<<"     "<<quantity<<"     "<<tax<<"     "<<discount<<endl;
		}
};
main()
{
	vr v1,v2[100],temp;
	
	int n,i,j,search,islogin;
	
	do
	{
		islogin=v1.login();
	}while(islogin!=1);
	
	if(islogin==1)
	{
		cout<<"\n\nEnter the Produc :";
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			v2[i].product();
		}
		
			
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(v2[i].item_n>v2[j].item_n)
				{
					temp=v2[j];
					v2[j]=v2[i];
					v2[i]=temp;
				}
			}
		}
		
		for(i=0;i<n;i++)
		{
			v2[i].ans();
		}
	}
}