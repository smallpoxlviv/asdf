#include <iostream>
#include "classAAA.h"
using namespace std;

void main() {
	AAA Matrix[n];
	cout << "    Input matrix" << endl;
	inputMatrix(Matrix);
	cout << "    Unsorted matrix" << endl;
	outputMatrix(Matrix);
	mergeSortDecreaseStrings(Matrix);
	cout << "    Sorted matrix" << endl;
	outputMatrix(Matrix);
	avarageGeometricColoums(Matrix);
}