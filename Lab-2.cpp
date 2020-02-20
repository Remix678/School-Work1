/*

	Tito Hernandez
	Lab 1
	CISP 301
	
	Params:
	A = LW
	P = 2 (L + W)

*/

#include <iostream>

using namespace std;

int main ()
{
	
	double length, width, Area, Perimeter, P;
	
	//Get the Length of the Rectangle
	cout<<"Enter the Length of the Rectangle: ";
	//Input it
	cin>>length;
	
	//Get the Width of the rectangle
	cout<<"Enter the width of the Rectangle: ";
	//Input it
	cin>>width;
	
	Area =  length * width;
	P = Length + width;
	Perimeter = 2 * P;
	
	cout<<"Area of the Rectangle = "<<Area<<endl;
	cout<<"Perimeter = "<<Perimeter<<endl;
	
	
}
