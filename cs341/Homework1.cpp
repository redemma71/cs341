// Chad David Cover
// CS341 (Spring 2016)
// Homework 1 - Quadratic Formula
// Homework1.cpp : Main file

#include "stdafx.h"

int main() {

	// global variables
	char coeffVar[] = { 'a','b','c' }; // coefficient labels
	double coeff[3]; // coefficient values
	double n; // numerical input
	int var = 0; // input loop counter
	
	cout << "*******************************" << endl;
	cout << "Fun with the Quadratic Formula!" << endl;
	cout << "*******************************" << endl << endl;
	
	// prompt user for input
	while (var < 3) {
		if (var == 0) {
			cout << "Enter a number (except 0) for coefficient " << coeffVar[var] << ":" << endl;
			cin >> n;
			if (!cin.eof() && cin.good() && n != 0) {
				coeff[var] = n;
			}
			else {
				cout << "Sorry, your entry wasn't valid. Exiting" << endl;
				return 0;
			}
		} else {
			cout << "Enter a number for coefficient " << coeffVar[var] << ":" << endl;
			cin >> n;
			if (!cin.eof() && cin.good()) {
				coeff[var] = n;
			}
			else {
				cout << "Sorry, your entry wasn't valid. Exiting" << endl;
				return 0;
			}
		}
		var++; // increment while loop counter
	}

	QuadraticFormula homework1;
	homework1.setCoefficient('a', coeff[0]);
	homework1.setCoefficient('b', coeff[1]);
	homework1.setCoefficient('c', coeff[2]);
	double a = homework1.getCoefficient('a');
	double b = homework1.getCoefficient('b');
	double c = homework1.getCoefficient('c');

	// calculate 2*a
	double twoA = homework1.twoA(a);
	// calculate b^2
	double bSquare = homework1.bSquare(b);
	// calculate 4*a*c
	double fourAC = homework1.fourAC(a, c);
	
	// determine number of real roots
	int numRoots = homework1.numRoots(bSquare, fourAC);

	//
	if (numRoots == 0) {
		cout << "This formula has no real roots." << endl;
	} else if (numRoots == 1) {
		double root = homework1.oneRoot(twoA, b);
		cout << "This formula has one real root: "; 
		cout << fixed << setprecision(3) << root << "." << endl;
	}
	else {
		double* roots = homework1.twoRoots(twoA, b, bSquare, fourAC);
		cout << "This formula has two real roots: x=" << fixed << setprecision(3) << roots[0] << ", and x=" << roots[1] << "." << endl;
	}

	/* tests of QuadraticFormula object with manual values
	 cout << "The value of a is " << a << "." << endl;
	 cout << "The value of b is " << b << "." << endl;
	 cout << "The value of c is " << c << "." << endl;*/

	return EXIT_SUCCESS;
}