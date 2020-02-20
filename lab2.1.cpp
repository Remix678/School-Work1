/*

Tito Hernandez

Using function prototype, write a program that will do the following:

1.  takes two numbers (pay rate & hours)
 2.  multiply  to get gross pay
 3.  calculates net pay by subtracting 15%

Process: 

1.  Write algorithm first
2.  Name variables locally on your main and prototype functions.  Remember, pay means float type and time is int.
3. Overload (pass by reference) rate and time into gross pay
4.  net pay is equal gross pay minus gross pay * .15
5.  Print net pay is....
6.  Gross pay is...
7.  Good luck.

*/


#include <iostream>
#include <cmath>
using namespace std;

	int netPay (int grosspay);
	int grossPay (int payRate, int Hours);

int main () {
	int netPay ();
	float payRate;
	int Hours, gross;
	
	cout<<"How much do you get paid: " << endl;
	cin>>payRate;
	
	cout<<"How long did you work: " << endl;
	cin>>Hours;
	
	grossPay (payRate, Hours);
	
}

int grossPay (int payRate, int Hours) {
	int grosspay;
	grosspay = payRate * Hours;
	netPay (grosspay);
	cout<<"Your gross pay is: " << grosspay << endl;
	return grosspay;
}


int netPay (int grosspay) {
	int net;
	net = grosspay - grosspay * .15;
	cout<<"Your net pay is: " <<net<<endl;
	return net;
}


