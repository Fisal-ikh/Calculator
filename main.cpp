/*
 * Calculator.cpp
 *
 *  Date: [01/15/23]
 *  Author: [fisal ikhmayes]
 */

#include <iostream>

using namespace std;

int main(){  //switched to int main instead of void
	//char statement[100]; // this is not needed
	double op1, op2; // switched to double
	char operation;
	char answer;   //missing ;

	cout << "Would you like to solve a problem? y or Y for yes and n or N for no." << endl;
	cin >> answer; // took input for the while look.

	while (answer=='y' || answer == 'Y') { // added option for capital Y
		cout << "Enter expression" <<endl;
		cin >> op2 >> operation >> op1;

		if (operation == '+') { // added {} brackets and changed " to '
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // switched >> to <<
		}
		else if (operation == '-') { // added "else if" and brackets
			cout << op1 << " - " << op2 << " = " << (op1 - op2) << endl; // switched >> to <<
		}
		else if (operation == '*') { // added "else if" and brackets
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; //missing semicolon and changed '/' to "*" for  output
		}
		else if (operation == '/') { // added "else if" and brackets
			cout << op1 << " / " << op2 << " = " << (op1 / op2) << endl; // switched * to / for output
		}

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;

	}
	if (answer=='n' || answer == 'N') { // added the check for n or N
		cout << "Program finished." << endl;
		return 0;
	}
}

