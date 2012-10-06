// This software allows the user to use every mathematical operation and
// transformation available in the cmath library.
// By Ronald Tejada
// Last edited: 10/06/12 at 6:00 PM Eastern Time


#include <iostream>
#include <cmath>
#include "options.h"
using namespace std;

int main()
{
	intro();					// Introduces user to what the software does
	int choice = 0;				// Stores the function type # selected
	int function = 0;			// Stores the function # selected

	// Main program loop
	bool restart = true;
	do
	{
		options();							// Displays the function types
		functionChoice(&choice, &function);	// Assigns choice and function with function type # and function #
		
		// Uses function type # to call the proper function #
		if (choice == 1)
			trigChoice(function);
		
		if (choice == 2)
			hyperChoice(function);

		if (choice == 3)
			expoChoice(function);

		if (choice == 4)
			powerChoice(function);

		if (choice == 5)
			roundChoice(function);

		// Option to restart the main loop or exit
		cout << "1 to Restart or 0 to Exit: ";
		cin >> restart;
		cout << endl << endl;
	
	} while(restart == true);
	
	cout << "Good-Bye!" << endl;

	return 0;
}

void intro()
{
	cout << "This software allows the user to compute common\n" <<
		"mathematical operations and transformations.\n\n";
}

void options()
{
	cout << "1. TRIGONOMETRIC FUNCTIONS\n";
	cout << "2. HYPERBOLIC FUNCTIONS\n";
	cout << "3. EXPONENTIAL AND LOGARITHMIC FUNCTIONS\n";
	cout << "4. POWER FUNCTIONS\n";
	cout << "5. ROUNDING, ABSOLUTE VALUE AND REMAINDER FUNCTIONS\n\n";
	cout << "Which function type do you need? ";
}

void functionChoice(int *choice, int *function)
{
		cin >> *choice;	// Stores the function type #
		switch(*choice) // Stores the function # selected based on function type # selected
		{
		case 1: trig(function);
			break;
		case 2: hyper(function);
			break;
		case 3: expo(function);
			break;
		case 4:	power(function);
			break;
		case 5:	round(function);
			break;
		}
}

void trig(int *function)
{
	cout << "\n1. cosine\n";
	cout << "2. sine\n";	
	cout << "3. tangent\n";
	cout << "4. arc cosine\n";
	cout << "5. arc sine\n";
	cout << "6. arc tangent\n";
	cout << "7. arc tangent with two parameters\n\n";
	cout << "Which function do you need? ";
	// Which function the user wants and returns/assigns it to function in main
	cin >> *function;
}

void hyper(int *function)
{
	cout << "\n1. hyperbolic cosine\n";
	cout << "2. hyperbolic sine\n";
	cout << "3. hyperbolic tangent\n\n";
	cout << "Which function do you need? ";
	// Which function the user wants and returns/assigns it to function in main
	cin >> *function;
}

void expo(int *function)
{
	cout << "\n1. exponential function\n";
	cout << "2. get significand and exponent\n";
	cout << "3. generate number from significand and exponent\n";
	cout << "4. natural logarithm\n";
	cout << "5. common logarithm\n";
	cout << "6. break into fractional and integral parts\n\n";
	cout << "Which function do you need? ";
	// Which function the user wants and returns/assigns it to function in main
	cin >> *function;
}

void power(int *function)
{
	cout << "\n1. raise to power\n";
	cout << "2. square root\n\n";
	cout << "Which function do you need? ";
	// Which function the user wants and returns/assigns it to function in main
	cin >> *function;
}

void round(int *function)
{
	cout << "\n1. round up value\n";
	cout << "2. absolute value\n";
	cout << "3. round down value\n";
	cout << "4. remainder of division\n\n";
	cout << "Which function do you need? ";
	// Which function the user wants and returns/assigns it to function in main
	cin >> *function;
}

void trigChoice(int function)
{
	double num1, num2, answer; // num1 and num2 are user input choices and answer is the output
	switch (function)
	{
	case 1: cout << "\nCompute cosine of: "; 
		cin >> num1;
		answer = cos(num1);			
		break;
	case 2: cout << "\nCompute sine of: ";
		cin >> num1;
		answer = sin(num1);
		break;
	case 3: cout << "\nCompute tangent of: ";
		cin >> num1;
		answer = tan(num1);
		break;
	case 4: cout << "\nCompute arc cosine of: ";
		cin >> num1;
		answer = acos(num1);
		break;
	case 5: cout << "\nCompute arc sine of: ";
		cin >> num1;
		answer = asin(num1);
		break;
	case 6: cout << "\nCompute arc tangent of: ";
		cin >> num1;
		answer = atan(num1);
		break;
	case 7: cout << "\nCompute arc tangent w/ first parameter of: ";
		cin >> num1;
		cout << "and second parameter of: ";
		cin >> num2;
		answer = atan2(num1, num2);
		break;
	}
	cout << "\nTHE ANSWER IS " << answer << endl << endl;
}

void hyperChoice(int function)
{
	double num1, answer; // num1 and num2 are user input choices and answer is the output
	switch (function)
	{
	case 1: cout << "\nCompute hyperbolic cosine of: "; 
		cin >> num1;
		answer = cosh(num1);
		break;
	case 2: cout << "\nCompute hyperbolic sine of: ";
		cin >> num1;
		answer = sinh(num1);
		break;
	case 3: cout << "\nCompute hyperbolic tangent of: ";
		cin >> num1;
		answer = tanh(num1);
		break;
	}
	cout << "\nTHE ANSWER IS " << answer << endl << endl;
}

void expoChoice(int function)
{
	double num1, d_num2, answer; // num1 and num3 are user input choices and answer is the output
	int num2; // frexp and ldexp require an int
	switch (function)
	{
	case 1: cout << "\nCompute exponential function of: "; 
		cin >> num1;
		answer = exp(num1);
		break;
	case 2: cout << "\nGet significand of: ";
		cin >> num1;
		cout << "and exponent of: ";
		cin >> num2;
		answer = frexp(num1, &num2);
		break;
	case 3: cout << "\nGenerate number from significand of: ";
		cin >> num1;
		cout << "and exponent of: ";
		cin >> num2;
		answer = ldexp(num1, num2);
		break;
	case 4: cout << "\nCompute natural logarithm of: ";
		cin >> num1;
		answer = log(num1);
		break;
	case 5: cout << "\nCompute common logarithm of: ";
		cin >> num1;
		answer = log10(num1);
		break;
	case 6: cout << "Break into fractional of: ";
		cin >> num1;
		cout << "and integral parts of: ";
		cin >> d_num2;
		answer = modf(num1, &d_num2);
		break;
	}
	cout << "\nTHE ANSWER IS " << answer << endl << endl;
}

void powerChoice(int function)
{
	double num1, num2, answer; // num1 and num2 are user input choices and answer is the output
	switch (function)
	{
	case 1: cout << "\nRaise: "; 
		cin >> num1;
		cout << "to power of: ";
		cin >> num2;
		answer = pow(num1, num2);
		break;
	case 2: cout << "\nCompute square root of: ";
		cin >> num1;
		answer = sqrt(num1);
		break;
	}
	cout << "\nTHE ANSWER IS " << answer << endl << endl;
}

void roundChoice(int function)
{
	double num1, num2, answer; // num1 and num2 are user input choices and answer is the output
	switch (function)
	{
	case 1: cout << "\nRound up value of: "; 
		cin >> num1;
		answer = ceil(num1);
		break;
	case 2: cout << "\nCompute absolute value of: ";
		cin >> num1;
		answer = fabs(num1);
		break;
	case 3: cout << "\nRound down value of: ";
		cin >> num1;
		answer = floor(num1);
		break;
	case 4: cout << "\nCompute remainder of division from numerator: ";
		cin >> num1;
		cout << "and denominator: ";
		cin >> num2;
		answer = fmod(num1, num2);
		break;
	}
	cout << "\nTHE ANSWER IS " << answer << endl << endl;
}