#pragma once
#include <iostream>
using namespace std;
#define n 5

class AAA
{
private:
	double C[n];
public:
	friend void inputMatrix(AAA S[]);
	friend void outputMatrix(AAA  S[]);
	friend void mergeSortDecreaseStrings(AAA  S[]);
	friend void avarageGeometricColoums(AAA S[]);
};