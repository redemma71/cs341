// Chad David Cover
// CS341 (Spring 2016)
// Homework 1 - Quadratic Formula

#include "stdafx.h"

int main() {

	// no real root: x^2 - 3x + 4
	// one real root: -4x^2 + 12x -9 ; x = 1.500
	// two real roots: 2x^2 - 11x + 5 ; x = 0.500 & 5.000
	// two real roots: 1.99x^2 - 9.66x + 3.76 = 4.428 & 0.427
	// two real roots: -9.25x^2 + 5.5x + 4.75 = -0.479 & 1.073


	double array[5][3] = { {1,-3,4},{-4,12,-9},{2,-11,5},{1.99,-9.66,3.76},{-9.25,5.5,4.75} };
	string formulae[5] = { "x^2-3x+4","-4x^2+12x-9","2x^2-11x+5", "1.99x^2-9.66x+3.76","-9.25x^2+5.5x+4.75"};

	QuadraticFormula realRoot;

	for (int i = 0; i < 5; i++) {
		realRoot.setCoefficient('a', array[i][0]);
		realRoot.setCoefficient('b', array[i][1]);
		realRoot.setCoefficient('c', array[i][2]);
		double realA = realRoot.getCoefficient('a');
		double realB = realRoot.getCoefficient('b');
		double realC = realRoot.getCoefficient('c');
		double realTwoA = realRoot.twoA(realA);
		double realBSquare = realRoot.bSquare(realB);
		double realFourAC = realRoot.fourAC(realA, realC);
		int realNumRoots = realRoot.numRoots(realBSquare, realFourAC);

		cout << formulae[i] << endl;
		if (realNumRoots == 0) {
			cout << "This formula has no real roots." << endl << endl;
		} else if (realNumRoots == 1) {
			double root = realRoot.oneRoot(realTwoA, realB);
			cout << "This formula has one real root: ";
			cout << fixed << setprecision(3) << root << "." << endl << endl;
		} else {
			double* roots = realRoot.twoRoots(realTwoA, realB, realBSquare, realFourAC);
			cout << "This formula has two real roots: " << fixed << setprecision(3) << roots[0] << ", " << roots[1] << "." << endl << endl;
		}
	}

	// test of default constructor
	QuadraticFormula defaultConstructor;
	double aSet = defaultConstructor.setCoefficient('a',42.0);
	double bDefault = defaultConstructor.getCoefficient('b');
	double cDefault = defaultConstructor.getCoefficient('c');
	cout << "a is " << aSet << ", b is " << bDefault << ", and c is " << cDefault << "." << endl;

	return EXIT_SUCCESS;
}
