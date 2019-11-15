#include <iostream>
using namespace std;
#define n 5

class AAA
{
private:
	double C[n];
public:
	friend void InputMatrix(AAA S[]);
	friend void OutputMatrix(AAA  S[]);
	friend void MergeSortDecreaseStrings(AAA  S[]);
	friend void avarageGeometricColoums(AAA S[]);
};

void InputMatrix(AAA  S[])
{
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
		{
			cout << "[" << i+1 << "][" << j+1 << "] = ";
			cin >> S[i].C[j];
		}
}

void OutputMatrix(AAA  S[])
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
			cout << S[i].C[j] << "\t";
		    cout << endl;
	}
}

void  MergeSortDecreaseStrings (AAA  S[]){
	for (int a = 0; a < n; a++){
		for (int Size = 1; Size < n; Size *= 2){
			for (int I = 0; I < n - Size; I += 2 * Size){
				int LI = 0;
				int RI = 0;
				int L= I;
				int M = I + Size;
				int R = I + 2 * Size;
				R = (R < n) ? R : n;
				int* Sort = new int[R - L];

				while (L + LI < M && M + RI < R){
		            if (S[a].C[L + LI] > S[a].C[M + RI]){
						Sort[LI + RI] = S[a].C[L + LI];
						LI++;
					}
					else{
						Sort[LI + RI] = S[a].C[M + RI];
						RI++;
					}
				}
				while (L + LI < M){
					Sort[LI + RI] = S[a].C[L + LI];
					LI++;
				}
				while (M + RI < R){
					Sort[LI + RI] = S[a].C[M + RI];
					RI++;
				}
				for (int MergeI = 0; MergeI < LI + RI; MergeI++){
					S[a].C[L + MergeI] = Sort[MergeI];
				}
				delete[] Sort;
			}
		}
	}
}

void avarageGeometricColoums(AAA S[]) {
	double F = 0.0;
	for (int j = 0;j < n;j++) {
		double f = 1.0;
		for (int i = 0; i < n; i++) {
			f = f * S[i].C[j];
		}
		f = pow(fabs(f),0.2);
		F = F + f;
		cout << "Avarage Geometric in " << j+1 << " coloum= " << f << endl;
	}
	cout << "Sum of all avarage geometric= " << F<< endl;
};

void main() {
	AAA Matrix[n];
	cout << "    Input matrix" << endl;
	InputMatrix(Matrix);
	cout << "    Unsorted matrix" << endl;
	OutputMatrix(Matrix);
	MergeSortDecreaseStrings(Matrix);
	cout << "    Sorted matrix" << endl;
	OutputMatrix(Matrix);
	avarageGeometricColoums(Matrix);
}
