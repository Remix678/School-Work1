#include <iostream>
using namespace std;

int timesTen (int value);

int main () {
	
	int value;
	cout<<"Enter a number to multiply 10: "<<endl;
	cin>>value;
	
	timesTen (value);
	
}

int timesTen (int value) 
{
	int multiply;
	multiply = value * 10;
	cout<<"It is: "<<multiply<<endl;
}
