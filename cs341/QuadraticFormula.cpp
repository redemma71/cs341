// Chad David Cover
// CS341 (Spring 2016)
// Homework 1 - Quadratic Formula

#include "stdafx.h"

double QuadraticFormula::twoA(double a) {
	if (a == 0) {
		return 0;
	}
	else {
		return 2*a;
	}
}

double QuadraticFormula::bSquare(double b) {
	return b*b;
}

double QuadraticFormula::fourAC(double a, double c) {
	return 4 * a * c;
}

double QuadraticFormula::numRoots(double bSquare, double fourAC) {
	if (bSquare < fourAC) {
		return 0;
	}
	else if (bSquare == fourAC) {
		return 1;
	}
	else { // bSquare > fourAC
		return 2;
	}
}
 
double QuadraticFormula::oneRoot(double twoA, double b) {
		double root = -b/twoA;
		return root;
	}

double* QuadraticFormula::twoRoots(double twoA, double b, double bSquare, double fourAC) {
	double roots[2];
	int diff = bSquare - fourAC;
	roots[0] = (-b + sqrt(diff))/twoA;
	roots[1] = (-b - sqrt(diff))/twoA;
	return roots;
}

	// b*b - 4ac
	// b*b < 4ac : no real roots
	// b*b = 4ac : one real root @ -b/2a
	// b*b > 4ac : two real roots @ -b + sqrt(b*b - 4ac) and -b - sqrt(b*b - 4ac)

