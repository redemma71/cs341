#include <iostream>
using namespace std;

class quadratic {
private:
public:
};

int main() {
	int n;

	cout << "Please enter a valid integer." << endl;
	cin >> n;

	if (!cin.eof() && cin.good()) {
		// Ctrl+Z is eof in Windows
		cout << n << endl;
	}
	else if (cin.eof()) {
		cout << "Goodbye." << endl;
	}
	else {
		cout << "You didn't enter a valid integer." << endl;
	}


	return 0;
}