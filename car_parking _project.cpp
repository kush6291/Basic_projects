#include<iostream>
using namespace std;
int main()
{
	int u_input;
	int amount=0;
	int count=0;
	while(1)
	{
	
	cout<<"press 1 for rickshaw"<<endl;
    cout<<"press 2 for car"<<endl;
    cout<<"press 3 for bus"<<endl;
    cout<<"press 4 for showing record"<<endl;
    cout<<"press 5 for deleting record"<<endl;
    cin>>u_input;
	if(u_input==1)
	{
		amount=amount+50;
		count=count+1;
	} 
	else if(u_input==2)
	{
		amount=amount+100;
		count=count+1;
	}  
	else if(u_input==3)
	{
		amount=amount+150;
		count=count+1;
	}  
	else if(u_input==4)
	{
		cout<<"the total amount is "<<amount<<endl;
		cout<<"the total number of vehicles parked="<<count<<endl;
	}  
	else if(u_input==5)
	{
		amount=0;
		count=0;
		
	}
	else
	{
		cout<<"invalid";
	}
}
	  
	   
	  
    
    
    
	return 0;
}
