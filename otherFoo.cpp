#include <iostream>
#include "ClassAAA.h"

void inputMatrix(AAA  S[])
{
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
		{
			cout << "[" << i + 1 << "][" << j + 1 << "] = ";
			cin >> S[i].C[j];
		}
}

void outputMatrix(AAA  S[])
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
			cout << S[i].C[j] << "\t";
		cout << endl;
	}
}

void avarageGeometricColoums(AAA S[]) {
	double F = 0.0;
	for (int j = 0;j < n;j++) {
		double f = 1.0;
		for (int i = 0; i < n; i++) {
			f = f * S[i].C[j];
		}
		f = pow(fabs(f), 0.2);
		F = F + f;
		cout << "Avarage Geometric in " << j + 1 << " coloum= " << f << endl;
	}
	cout << "Sum of all avarage geometric= " << F << endl;
};
