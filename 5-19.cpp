#include <iostream>

using namespace std;

int showTax ();

int main () 
{
	int lotNumber;
	
	cout<<"Enter the property's lot number \n"
	<<"(or enter 0 to end). \n";
	cin>>lotNumber;
	
	while(lotNumber!=0 )
	{
		
		showTax ();
		
		cout<<"Enter the lot number for the \n"
		<<"next to the property (or 0 to end).";
		cin>>lotNumber;
	}
		
}

int showTax ()
{
	
	float propertyValue, tax;
	
	const float TAX_FACTOR = 0.0065;
	
	cout<<"Enter the property's value. \n";
	cin>>propertyValue;
	
	tax = propertyValue * TAX_FACTOR;
	
	cout<<"The property's tax is $"<<tax<<endl;
	
	
}
