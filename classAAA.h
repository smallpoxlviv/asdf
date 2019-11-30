#pragma once
#include <iostream>
using namespace std;
#define n 5

class Matrix
{
private:
	double coloum[n];
public:
	friend void inputMatrix(Matrix row[]);
	friend void outputMatrix(Matrix  row[]);
	friend void mergeSortDecreaseStrings(Matrix  row[]);
	friend void avarageGeometricOfColoums(Matrix row[]);
};