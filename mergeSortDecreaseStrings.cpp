#include <iostream>
#include "classAAA.h"

void  mergeSortDecreaseStrings (Matrix  row[]){
	for (int a = 0; a < n; a++){
		for (int size = 1; size < n; size *= 2){
			for (int iterator = 0; iterator < n - size; iterator += 2 * size){
				int leftIterator = 0;
				int rightIterator = 0;
				int left= iterator;
				int middle = iterator + size;
				int right = iterator + 2 * size;
				right = (right < n) ? right : n;
				int* sort = new int[right - left];

				while (left + leftIterator < middle && middle + rightIterator < right){
		            if (row[a].coloum[left + leftIterator] > row[a].coloum[middle + rightIterator]){
						sort[leftIterator + rightIterator] = row[a].coloum[left + leftIterator];
						leftIterator++;
					}
					else{
						sort[leftIterator + rightIterator] = row[a].coloum[middle + rightIterator];
						rightIterator++;
					}
				}
				while (left + leftIterator < middle){
					sort[leftIterator + rightIterator] = row[a].coloum[leftIterator + leftIterator];
					leftIterator++;
				}
				while (middle + rightIterator < right){
					sort[leftIterator + rightIterator] = row[a].coloum[middle + rightIterator];
					rightIterator++;
				}
				for (int mergeItertor = 0; mergeItertor < leftIterator + rightIterator; mergeItertor++){
					row[a].coloum[left + mergeItertor] = sort[mergeItertor];
				}
				delete[] sort;
			}
		}
	}
}
