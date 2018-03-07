// CCN2042 Assignment 1
// Program template file: A1Template.cpp
#include <iostream>
#include <iomanip>
using namespace std;

void showInfo()
{
	cout << "Name       : JUM HO YIN" << endl << "Student ID : 17067616A" << endl << "Class      : 201A";
	// Insert your codes to display your personal particulars here
}

void Q1()
{
	double a, b, c, A, B, PI = 3.1416;
	cout << "Please enter a number for angle A" << endl;
	cin >> A;	// Input angle A
	if (A >= 90 || A <= 0)	// Check the input angle A, Angle input should be between 0 to 90 degrees exclusively
	{
		cout << "Error" << endl;
		return;
	}
	cout << "Please enter a number for side b" << endl; // My 6th digit of student ID is 6(EVEN), so user shoule input side b
	cin >> b;	// Input side b
	if (b <= 0)		// Check the input side b, side input should be larger than 0
	{
		cout << "Error" << endl;
		return;
	}
	B = 90 - A;		// Calculate the rest values
	c = b / cos(A * PI / 180);
	a = tan(A * PI / 180) * b;
	cout << fixed << setprecision(3) << "a = " << a << ", b = " << b << ", c = " << c << ", A = " << A << "бу" << ", B = " << B << "бу";
	return;
}

void Q2()
{
	int i, d = 1, x = 0, a, d2;
	do
	{
		cout << "Please enter a positive integer value." << endl;
		cin >> i;
		if (i > 999999999 or i < 10)
		{
			cout << "Error" << endl;
		}
	} while (i > 999999999 or i < 10); // Check the input value
	while (i / pow(10, d) > 10) // Chek the digits of input
	{
		d = d + 1;
	}
	d2 = d + 1; // Save the total number of digits for calculate
	while (d >= 0)
	{
		a = (int)i / (int)pow(10, d);
		a = a % 10;  // Take out the digits
		cout << a << ", "; // Display the number one by one
		if ((d2 - d) % 2 == 0)
		{
			x = (int)x - (int)pow(a, 2); // Sum odd digits
		}
		else
		{
			x = (int)x + (int)pow(a, 2); // Minus even digits
		}
		d--;
	}
	cout << "x = " << x << endl;
}

void Q3()
{
	int size;
	do
	{
		cout << "Please enter the size of the bottle." << endl;
		cin >> size;
		if (size > 6 or size < 2)
		{
			cout << "Error" << endl;
		}
	} while (size > 6 or size < 2); // Check the input value

	for (int rows = 1; rows < size + size + 7; rows++)
	{
		while (rows == 2 || rows == 3) // Print the empty part of bottle
		{
			cout << "#";
			for (int cols = 0; cols < size + 2; cols++)
			{
				cout << " ";
			}
			cout << "#";
			cout << endl;
			break;
		}
		while (rows != 2 and rows != 3) // Print the filled part of bottle
		{
			if (rows >= size + 6) // print the neck of bottle
			{
				if (rows == size + 6)
				{
					cout << " ";
					for (int cols = 0; cols < size + 2; cols++)
					{
						cout << "#";
					}
					cout << " ";
					cout << endl;
				}
				else
				{
					cout << "  ";
					for (int cols = 0; cols < size; cols++)
					{
						cout << "#";
					}
					cout << "  ";
					cout << endl;
				}
			}
			else // print the body of bottle
			{
				for (int cols = 0; cols < size + 4; cols++)
				{
					cout << "#";
				}
				cout << endl;
			}
			break;
		}
	}
	return;
}

// GIVEN CODES, DO NOT MODIFY 
// BEGIN
int main()
{
	int prog_choice;

	showInfo();

	do {
		cout << endl;
		cout << "Assignment One - Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "(1) Program One" << endl;
		cout << "(2) Program Two" << endl;
		cout << "(3) Program Three" << endl;
		cout << "(4) Exit" << endl;
		cout << "Enter the choice: ";
		cin >> prog_choice;

		switch (prog_choice) {
		case 1: Q1(); break;
		case 2: Q2(); break;
		case 3: Q3(); break;
		case 4: break;
		default:
			cout << "Please enter choice 1 - 4 only." << endl;
			break;
		}
	} while (prog_choice != 4);

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END