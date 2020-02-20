/*

two functions
1. enter kilometers
2. convert kilometers



miles = kilometers x 0.6124


*/

#include <iostream>
using namespace std;

void showInput ();
int milesToKilometers (float miles);

int main () 
{
//	int miles;
//	float kilometers;
	
	showInput ();
	int milesToKilometers (float miles);
	
//	cout<<"Enter the amount of miles: "<<endl;
//	cin>>miles;
	
//	milesToKilometers (miles);
	
}

void showInput () 
{
	int miles;
	float kilometers;
	
	
	cout<<"Enter the amount of miles: "<<endl;
	cin>>miles;
	
	milesToKilometers (miles);
}



int milesToKilometers (float miles) 
{	
	float conversion;
	
	conversion = miles * 0.6214;
	
	cout <<"that converts from "<<miles<<" to "<<conversion<< " kilometers"<<endl;
	
}

