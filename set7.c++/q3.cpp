/*
3. WAP with a mother class animal.
 Inside it define a name and an age variables, and set_value() function. 
 Then create two bases variables Zebra and Dolphin which write a message telling the age,
  the name and giving some extra information (e.g. place of origin).
*/
#include<iostream>
using namespace std;
class Animal
{
	public :
		char name[100];
		int age;
		
		void set_value()
		{
			cout<<"\n\nEnter the animal name =>>>> ";
			cin>>name;
			
			cout<<"\nEnter the animal age =>>>> ";
			cin>>age;
		}
};
class Zebra : public Animal
{
	public :
		
		void info()
		{
			cout<<"Zebras are single-hoofed animals that are native to Africa. Zebras are very closely related to horses and donkeys; in fact, they are in the same genus, Equus. The most prominent feature of zebras is the bold patterns on their coats.";

		}
};
class Dolphin : public Animal
{
	public :
		
		void info()
		{
			cout<<"Dolphins are part of the toothed whales. Generally, they are among the smaller whales. Most live in salt water oceans, but some live in rivers – there are oceanic dolphins and river dolphins. Dolphins are from 1.5 metres (4.9 ft) to 4 metres (13 ft) long, but the largest dolphin, the killer whale (or orca), can be up to 8 metres (26 ft) long."<<endl;

		}
};
main()
{
	Zebra z1;
	z1.set_value();
	z1.info();
	
	Dolphin d1;
	d1.set_value();
	d1.info();
	
}
