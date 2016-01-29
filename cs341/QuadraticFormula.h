// Chad David Cover
// CS341 (Spring 2016)
// Homework 1 - Quadratic Formula
// QuadraticFormula.h: Class header file

#ifndef COVER_CS341_QUADRATICFORMULA
#define COVER_CS341_QUADRATICFORMULA

namespace cover_cs341 {
	class QuadraticFormula {
	private:
		double a, b, c;
	public:
		QuadraticFormula();
		double twoA(double a);
		double bSquare(double b);
		double fourAC(double a, double c);
		double numRoots(double bSquare, double fourAC);
		double oneRoot(double a, double b);
		double* twoRoots(double twoA, double b, double bSquare, double fourAC);
		double getCoefficient(char var);
		double setCoefficient(char var, double num);
	};
}

#endif // COVER_CS341_QUADRATICFORMULA

