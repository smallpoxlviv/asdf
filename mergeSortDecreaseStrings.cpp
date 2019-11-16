#include <iostream>
#include "classAAA.h"

void  mergeSortDecreaseStrings (AAA  S[]){
	for (int a = 0; a < n; a++){
		for (int Size = 1; Size < n; Size *= 2){
			for (int I = 0; I < n - Size; I += 2 * Size){
				int LI = 0;
				int RI = 0;
				int L= I;
				int M = I + Size;
				int R = I + 2 * Size;
				R = (R < n) ? R : n;
				double* Sort = new double[R - L];

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
