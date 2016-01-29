// Program Name: DynArray1.cpp  Author: John Maslanka  Date: 9/30/2015
// This programs allows user to create an int array of undetermined length 
//   as long as heap space available, by using the new and delete operators 
//   to create and dismiss successive int arrays in heap.
// This program accesses the array elements using indirection, i.e. the 
//   star operator (*) following the variable type in the declaration of a
//   variable.  Star operator is used subsequently to specify that the
//   contents of the variable or expression are a reference to the field 
//   which contains the actual data.

#include "stdafx.h"
#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
	
	int* Arr = NULL;  // Arr is pointer to an array of ints in heap
	int* temp = NULL; // temp defined likewise
	int count = 0;	  // track array length
	bool end = false; // flag to terminate while loop; AVOID using break stmt in loop

	cout << endl;	// provide blank line so user sees first prompt easily
	while (!cin.eof() && cin.good() && end == false)
	{
		temp = new(int[count+1]);  // ask for one new int in heap
		if (temp != NULL){  // if heap available
			cout << "Please enter an int number or EOF to terminate" << endl;
			cin >> *(temp + count);  // get user's next input
			// *(temp + count) syntax is called "base-and-displacement" referencing
			if (!cin.eof() && cin.good()) {  // if valid input
				for (int i = 0; i < count; i++) // enter int into temp array
					*(temp + i) = *(Arr + i);
				delete[] Arr; // delete current reference in Arr
				Arr = temp;   // assign reference in temp to Arr
			}
			else {  // if user entered an invalid value including EOF in input
				if (!cin.eof()) {
					cout << "Invalid Input" << endl;
				}
				end = true; // set flag to terminate while loop
			}
			count++;  // increment count of inputs for anticipated next input
		}
		else {
			cout << "Heap exhausted." << endl;  
			end = true;  // set flag to terminate while loop here also
		}
	}
	count--;  // decrement count, which was incremented in anticipation of
				//  another valid input
	if (count > 0) {  // if positive count, display entries of input array
		cout << "Input Array is: " << endl;
		for (int j = 0; j < count; j++) { // display array
			cout << "Address: " << &Arr[j] << " - Value: " << *(Arr + j) << endl;
		}
		cout << endl;  // return cursor to lefthand position
		}
//	system("PAUSE"); // in case your system expects PAUSE before ending program
	return 0;
}