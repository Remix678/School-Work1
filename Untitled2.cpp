#include <iostream>
using namespace std;

int showIntro ();
int cupsToOunces (float cups);

int main () {
	
	float cupsNeeded;
	
	showIntro ();
	
	cout<<"Enter the number of cups. "<<endl;
	cin>>cupsNeeded;
	
	cupsToOunces (cupsNeeded);
	
}

int showIntro () {
	
	cout<<"this program converts measurments"<<endl;
	cout<<"In cups to fluid ounces. For you"<<endl;
	cout<<"reference the formula is: "<<endl;
	cout<<"1 cup = 8 fluid ounces"<<endl;	
}

int cupsToOunces (float cups) {
	
	
	float ounces;
	
	ounces = cups * 8;
	
	cout <<"that converts to "<<ounces<< " ounces"<<endl;
	
}
