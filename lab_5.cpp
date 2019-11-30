#include <iostream>
#include "classAAA.h"
using namespace std;

void main() {
	Matrix matrix[n];
	cout << "    Input matrix" << endl;
	inputMatrix(matrix);
	cout << "    Unsorted matrix" << endl;
	outputMatrix(matrix);
	mergeSortDecreaseStrings(matrix);
	cout << "    Sorted matrix" << endl;
	outputMatrix(matrix);
	avarageGeometricOfColoums(matrix);
}