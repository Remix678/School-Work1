/*
Tito Hernandez
---------------------
ATM Machine
Params:
1.  For deposit, use input to deposit any dollar amount /

2.  View the balance from the deposited amount /

3.  Withdraw an amount from the previous deposited amount.

4.  View Balance again.

5.  Exit the program.
*/

#include <iostream>
#include <string>
using namespace std;

int main () 
{
	
	double balance, withdraw, deposit;
	int input, total, wtotal; //We need this to know which choice the user is making
	balance = 1500; //Let's start off with some financial aid, no?
	
	cout<<"Balance for the current balance of your account \n" //\n are end of lines
	<<"2 for deposit \n"
	<<"3 for a withdraw of your account \n"
	<<"4 to View available balance \n"
	<<"0 to exit \n"
	<<"Type 1 and hit enter to continue: ";
	cin>>input; //we need to know what they're trying to do
	
	while(input!= 0) {
		cout<<"Enter a choice: ";
		cin>>input;
		
			switch (input)  //a switch helps decide which was the user is going
		{	
		
		case "Balance": cout<<"The current balance in your account is: "<<balance<<endl;
		break; //I found out that these end the execution of the case: before I added these it would just continue on...
		
		case "Deposit": cout<<"Please enter an amount to deposit"<<endl;
		cin>>deposit;
		cout<<"You have chosen to deposit"<<deposit<<endl;
		total = balance + deposit; //this need to get an updated figure. You have to include how much you have and how much you need to withdraw
		balance = total; //Need to update the original variable
		cout<<"Current balance after deposit: "<<balance<<endl; //After calculation, display how much they have :)
		break;
		
		case "Withdraw": cout<<"How much do you want to withdraw? "<<endl;
		cin>>withdraw;
		cout<<"You have withdrawn: "<<withdraw<<endl;
		wtotal = balance - withdraw;
		balance = wtotal;
		cout<<"Current balance after withdraw: "<<balance<<endl;
		break;
		
		case "Available Balance": cout<<"The current balance after all transactions:"<<balance<<endl;
		break;
		
		default: cout<<"Exiting"<<endl;
		}
		
	}
}









