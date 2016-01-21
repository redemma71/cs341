// Author: John Maslanka
// Date: 30-May-2000
// Installation: Home PC with MS Visual C++ V 6.0
//
// C++ program to accept a number of integer numbers
// from the user's primary, to use rand() the random number 
// generator to create a list of numbers,to sort 
// the array in ascending sequence, and to display the 
// numbers in sorted order.
// This program illustrates a function call with 
// parameters passed by dereference using the * operator.
// The actual parameters are passed as addresses of array
// elements. 


// Revised by Chad David Cover
// Date: January 21, 2016

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

void swap (int*, int *);

int main ()
{
	// global variables
	int x[200], count = 0, n;
 
	//cout << "Enter the number of integers to be generated: ";
	cout << "Enter the number of integers you will sort (Ctrl+Z to quit): ";
	cin >> n;

	if (!cin.eof() && cin.good() && (n > 1 && n < 201) ) {
		//srand (0);
		for (int i = 0; i < n; ++i) {
				// x[i] = rand ();
				cin >> x[i];
			}
		cout << "Initial array is ";
		for (int i = 0; i < n; ++i) {
			cout << x[i] << " ";
		}
		cout << endl;
		// end of initial work
		
		// begin main work
		for (int i = 0; i < n - 1; ++i) {
			for (int j = 0; j < n - 1 - i; ++j) {
			++count;				// count comparisons
			if (x[j] > x[j + 1])	// compare x to x+1
			{	// the bubble
				int temp = x[j];    // assign x to temp placeholder
				x[j] = x[j + 1];    // assign x+1 to x
				x[j + 1] = temp;    // assign temp to x+1
			}
			// swap (x+j, x+j+1);
			}
		}
		// end main work

		 // begin results printout
		 cout << "Final array is ";
		 for (int i = 0; i < n; ++i) {
			 cout << " " << x[i];
		 }
		cout << endl;
		cout << "Number of Compares is " << count << endl;
		// end results printout
	} else if (n == 1) {
		cout << "Sorry, that's too many few numbers." << endl;
	} else {
		cout << "Sorry, that's too many numbers." << endl;
	}

	// begin exit message
	cout << "Program terminating. Goodbye!" << endl;
	return EXIT_SUCCESS;
	// end exit message

}

/* void swap ( int* a, int* b)
{ int temp = *a;
  *a = *b;
  *b = temp;
}
*/



/*
G:\BU CS341 Fall 2010> bubblesort2
Enter the number of integers to be generated: 5
Initial array is 38 7719 21238 2437 8855
Time now is 1326751419
Time now is 1326751419
Time difference is 0
Total comparisons = 10
Sorted array is 38 2437 7719 8855 21238
Program terminating
*/













