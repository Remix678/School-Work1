#include <iostream>
#include <string>
using namespace std;

int showComissions();

int main () 
{
	//string keepGoing = "y";
	char keepGoing = 'y';
	
	
	//while (keepGoing == "y")
	while (keepGoing == 'y')
	{
		
		showComissions();
		
		cout<<"Do you want to calculate another \n"
		<<"commision? (enter y for yes.)";
		cin>>keepGoing;
	}	
}

int showComissions()
{
	float sales, commission;
	
	const float COMMISSION_RATE = 0.10;
	
	cout<<"Enter the amount of sales.";
	cin>>sales;
	
	commission = sales * COMMISSION_RATE;
	
	cout<<"The commission is $"<<commission;
	
}
