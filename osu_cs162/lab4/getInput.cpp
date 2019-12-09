/**************************************************************************************************************
** Program name: getInput.cpp
** Author: Sangyun Lee
** Date: OCT 10 2019
** Description: This is function to get an input from users and validate it. It accept int as parameter,
**				so it can distinguish and prompt the right message and getting user input.
**			    If the user input is the correct input, then return the value for further process.
**************************************************************************************************************/

#include "getInput.hpp"
using std::cin;
using std::cout;
using std::endl;

int getInput(int x)
{
	int userNum;					// variable that contains the user's input
	int validate = 0;				//validate flag to use while loop


	if (x == 0)																						//If x == 0, 
	{
		while (!validate)
		{
			cout << "Please enter your response: ";
			cin >> userNum;
			cout << endl;

			if (cin.fail() || userNum < 1  || userNum > 4 || cin.get() != '\n')						//if the input is not an integer, or unintended interger
			{
				cout << "Your input is wrong, please try again." << endl << endl;					//print error message
				cin.clear();																		//clear the cin
				cin.ignore(256, '\n');																//skip to the newline
			}

			else
				validate = 1;																		//set the validate variable as 1, then get out from while loop
		}

		return userNum;																				//return the value
	}

	else if (x > 0)
		while (!validate)
		{
			cout << "Please enter your response: ";
			cin >> userNum;
			cout << endl;
																									//here x is size of vector, to limit the user input
			if (cin.fail() || userNum < 1 || userNum > x || cin.get() != '\n')						//if the input is not an integer, or unintended interger
			{
				cout << "Your input is wrong, please try again." << endl << endl;					//print error message
				cin.clear();																		//clear the cin
				cin.ignore(256, '\n');																//skip to the newline
			}

			else
				validate = 1;																		//set the validate variable as 1, then get out from while loop
		}

	return userNum;

}
