#include<iostream>
using namespace std;
class system
{
	
	public:
		char event[10];
		char f_name[10],l_name[10];
		int guest,min,i;
		int min,hour,cost_of_dinner;
		int serv=20,total;
		
	void event1()
	{
		cout<<"**********Event Management System**********";
		cout<<"Enter the name of event:"<<endl;
		for(i=0;i<10;i++)
		{
			cin>>event[i];	
		}
	}
	void name()
	{	
		cout<<"Enter the Customer's first and last name"<<endl;
		for(i=0;i<=10;i++)
		{
			cin>>f_name[i]>>l_name[i];
		}
		cout<<"Enter the number of guest:"<<endl;
		cin>>guest;
		
		cout<<"Enter the number of Minutes in the event:"<<endl;
		cin>>min;
	}
	void cost()
	{
		if(min>60)
		{
			cout<<"const double CostPerMin= .40";
		}
		if(hour>60)
		{
			cout<<"const double CostPerHour= 18.50";
		}
		if(cost_of_dinner>20.70)
		{
			cout<<"const double CostOfDinner= 20.70";
		}
	}
	void servers()
	{
		total=guest/serv;
		cout<<server required for No. of Guests Entered are : <<guest;
	}
};
int main()
{
	system s1;
	s1.event1();
	s1.name();
	s1.cost();
	s1.servers();
}
