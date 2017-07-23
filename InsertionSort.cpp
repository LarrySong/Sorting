#include <iostream>
using namespace std;

void InsertionSort(intA[], int n){
	for(i = 0; i < n; i++){
		int value = A[i];
		j = i;
		while(j > 0 && A[j - 1] > value){
			A[j] = A[j - 1];
			j--;
		}
		A[j] = value;
	}
}