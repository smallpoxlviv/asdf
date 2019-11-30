#include <iostream>
#include "ClassAAA.h"

void inputMatrix(Matrix  row[]){
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
		{
			cout << "[" << i + 1 << "][" << j + 1 << "] = ";
			cin >> row[i].coloum[j];
		}
}

void outputMatrix(Matrix  row[]){
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
			cout << row[i].coloum[j] << "\t";
		cout << endl;
	}
}

void avarageGeometricOfColoums(Matrix row[]) {
	double sumOfGeometricAvarages = 0.0;
	for (int j = 0;j < n;j++) {
		double geometricAvarage = 1.0;
		for (int i = 0; i < n; i++) {
			geometricAvarage = geometricAvarage * row[i].coloum[j];
		}
		geometricAvarage = pow(fabs(geometricAvarage), 0.2);
		sumOfGeometricAvarages = sumOfGeometricAvarages + geometricAvarage;
		cout << "Gometric avarage in " << j + 1 << " coloum= " << geometricAvarage << endl;
	}
	cout << "Sum of all geometric avarage= " << sumOfGeometricAvarages << endl;
};
