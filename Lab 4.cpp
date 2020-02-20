/*
Tito Hernandez
CISP 301 - LAB 4 - Repetition Structures 

Params:
Translate from pseudocode to C++ program 5 - 20 on page 265 of your textbook.  
Make sure the output looks exactly like page 266. 


*/

#include <iostream>
using namespace std;

int main () 
{
	int numStudents, numTestScores, total, student, testNum;
	float score, average;
	
	cout<<"How many students do you have? "<<endl;
	cin>>numStudents;
	
	cout<<"How many test scores per student? "<<endl;
	cin>>numTestScores;
	
	
	for (student=1; student <= numStudents;student++)
	{
		total = 0;
		
		cout<<"Student number."<<student<<endl;
		cout<<"-----------";
		
		for (testNum=1; testNum <= numTestScores;testNum++)
		{
			cout<<"Enter test number"<<endl;
			cin>>score;
			total = total + score;
		}	
		
		average = total / numTestScores;
	cout<<"The average for student "<<student<< " is "<<average<<endl;
	}
		
}
