

#include <iostream>
using namespace std;

float MAX_TEMP = 102.5;

int main () 
{
	float temperature;
	
	cout<<"Enter the substance's temperature"<<endl;
	cin>>temperature;	
	
	while(temperature > MAX_TEMP)
	{
		
		cout<<"The temperature is too high. \n"
		<<"Turn the thermostat down and wait \n"
		<<"Five minutes. Take the temperature \n"
		<<"again and enter it here \n";
		cin>>temperature;	
	}
	
	cout<<"The temperature is acceptable"<<endl;
	cout<<"Check it again in 15 minutes"<<endl;
}







