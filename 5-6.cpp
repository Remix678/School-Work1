#include <iostream>
#include <string>

using namespace std;

int showRetail ();

int main ()
{
	
	char doAnother = 'y';
	
	
	do
		showRetail ();

		cout<<"Do you have another item? (Enter y for yes)";
		cin>>doAnother;		
		
	while (doAnother == 'y');
	
	

	int showRetail ();
	{
		float wholesale, retail;
		
		const float MARKUP = 2.50;
		
		cout<<"Enter an item's wholesale cost.";
		cin>>wholesale;
		
		retail = wholesale * MARKUP;
		
		cout<<"The retail price is $"<<retail<<endl;
		
		
	}
	
}
