// Chad David Cover
// CS341 (Spring 2016)
// Homework 1 - Quadratic Formula

#include "stdafx.h"

int main() {

	// global variables
	char coeffVar[] = { 'a','b','c' };
	int coeff[3];
	int n;
	int var = 0;
	
	// prompt user for input
	while (var < 3) {
		cout << "Enter a non-0 integer for coefficient " << coeffVar[var] << ":" << endl;
		cin >> n;
		if (!cin.eof() && cin.good()) {
			coeff[var] = n;
		}
		else {
			cout << "Sorry, your entry wasn't valid. Exiting" << endl;
			return 0;
		}
		var++;
	}

	QuadraticFormula homework1;
	// calculate 2*a
	int twoA = homework1.twoA(coeff[0]);
	// calculate b^2
	int bSquare = homework1.bSquare(coeff[1]);
	// calculate 4*a*c
	int fourAC = homework1.fourAC(coeff[0], coeff[2]);
	// determine number of real roots
	int numRoots = homework1.numRoots(bSquare, fourAC);

	// calculate real roots
	if (numRoots == 0) {
		cout << "This formula has no real roots." << endl;
	} else if (numRoots == 1) {
		double root = homework1.oneRoot(twoA, coeff[1]);
		cout << "This formula has one real root: " << fixed << setprecision(3) << root << "." << endl;
	}
	else {
		double* roots = homework1.twoRoots(twoA, coeff[1], bSquare, fourAC);
		cout << "This formula has two real roots: " << fixed << setprecision(3) << roots[0] << ", " << roots[1] << "." << endl;
	}

	return EXIT_SUCCESS;
}