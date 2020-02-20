#include <iostream>
#include <cmath>

using namespace std;


int main ()
{
	int counter, square;
	
	const int MAX_VALUE = 10;
	
	cout<<"Number"<<"		"<<"Square"<<endl
	<<"-------------------------------"<<endl;
	
	for(counter=1; counter <= MAX_VALUE;counter++)
	{
		square = pow(counter,2);
		cout<<counter<<"		"<<square<<endl;
		
	}
	return 0;

}
