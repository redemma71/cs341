// Author: John Maslanka    Date:   13-Apr-2002, updated 2-Feb-2011
// Installation: Hone PC with MS Visual C++ V 6.0
// Rework Main and Sabitch mergesort example in Ch 13

#include "stdafx.h"
#include <iomanip>
#include <cstdlib>
using namespace std;

int main () {  
	// Introduction and data entry
MergeSort a; 
int i, n, x[100000];
//cout << "Enter the number of integers to be generated: ";
cout << "enter the number of integers to be entered: ";
cin >> n;
if (!cin.eof() && cin.good() && (n >= 2 && n <= 100))  
	{cout << "Enter your integers, hitting <Enter> after each." << endl;
     for (i = 0; i < n; ++i)
		 cin >> x[i];
		// x[i] = rand ();
	if (!cin.eof() && cin.good())
	{
	// Sorting procedure
	 a.mergesort (x, n);
	 // conclusion or wrapup
     cout << "Sorted array -- " ;
	 for (i = 0; i < n; ++i)
		 cout << x [i] << " ";
	 cout << endl;
	// cout << "Number of compares was " << ct_comps << endl;
	}
	}
 system("PAUSE");
 return EXIT_SUCCESS;
}	// end of main

