// Chad David Cover
// CS341 (Spring 2016)
// Homework 1 - Quadratic Formula

class QuadraticFormula {
private:
	double a, b, c;
public:
	QuadraticFormula();
	double twoA(double a);
	double bSquare(double b);
	double fourAC(double a, double c);
	int numRoots(double bSquare, double fourAC);
	double oneRoot(double a, double b);
	double* twoRoots(double twoA, double b, double bSquare, double fourAC);
	double getCoefficient(char var);
	double setCoefficient(char var, int num);
};
