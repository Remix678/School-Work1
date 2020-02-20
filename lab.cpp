
#include <iostream>
using namespace std;

int doubleNumber (int value);

int main () {
	
	int number;
	cout<<"Enter a number and I will display: "<<endl;
	cin>>number;
	cout<<"That number doubled."<<endl;
	doubleNumber (number);	//This value is transfered
}

int doubleNumber (int value) {
	
	int result;
	result = value * 2;
	cout<<" "<<result<<endl;
	
}
