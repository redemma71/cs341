// Chad David Cover
// CS341 (Spring 2016)
// Homework 1 - Quadratic Formula
// QuadraticFormula.cpp: Class implementation file

#include "stdafx.h"

namespace cover_cs341 {
	QuadraticFormula::QuadraticFormula() {
		a = 0;
		b = 0;
		c = 0;
	};

	double QuadraticFormula::twoA(double a) {
		if (a == 0) {
			return 0;
		}
		else {
			return 2 * a;
		}
	}

	double QuadraticFormula::bSquare(double b) {
		return pow(b,2);
	}

	double QuadraticFormula::fourAC(double a, double c) {
		return 4 * a * c;
	}

	double QuadraticFormula::numRoots(double bSquare, double fourAC) {
		if (bSquare < fourAC) {
			// b*b < 4ac : no real roots
			return 0;
		}
		else if (bSquare == fourAC) {
			// b*b = 4ac : one real
			return 1;
		}
		else {
			// b*b > 4ac : two real roots at 
			// -b + sqrt(b*b - 4ac) & -b - sqrt(b*b - 4ac)
			return 2;
		}
	}

	double QuadraticFormula::oneRoot(double twoA, double b) {
		// one real root at - b / 2a
		double root = -b / twoA;
		// get absolute value of signed 0
		if (root == 0.0) {
			root = abs(0.0);
		}
		return root;
	}

	double* QuadraticFormula::twoRoots(double twoA, double b, double bSquare, double fourAC) {
		// two real roots at -b + sqrt(b*b - 4ac) & -b - sqrt(b*b - 4ac)
		double roots[2];
		double diff = bSquare - fourAC;
		roots[0] = (-b + sqrt(diff)) / twoA;
		// get absolute value of signed 0
		if (roots[0] == 0.0) {
			roots[0] = abs(0.0);
		}
		roots[1] = (-b - sqrt(diff)) / twoA;
		// get absolute value of signed 0
		if (roots[1] == 0.0) {
			roots[1] = abs(0.0);
		}
		return roots;
	}

	double QuadraticFormula::getCoefficient(char var) {
		if (var == 'a') {
			return a;
		}
		else if (var == 'b') {
			return b;
		}
		else {
			return c;
		}
	}

	double QuadraticFormula::setCoefficient(char var, double num) {
		if (var == 'a') {
			a = num;
			return a;
		}
		else if (var == 'b') {
			b = num;
			return b;
		}
		else {
			c = num;
			return c;
		}
	}
}
