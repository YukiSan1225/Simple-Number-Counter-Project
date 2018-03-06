//Number Counter 
#include<iostream>
#include<iomanip>

using namespace std; 

int NumberCounter()
{
	int input = 1;
	int counter = 1;

	while (input < 11)
	{
		cout << "Please enter a number: ";
		cin >> input; //read users number
		input++;
		counter++;

		if (input >= 11) input++; //if the user inputs a number higher than 10, stop the loop.

	}

	system("pause");
	return 0; 
	
}