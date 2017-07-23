#include <iostream>
using namespace std;

void SelectionSort(intA[], int n){
	for(int i = 0; i < n - 1; i++){
		int indexMin = i;
		for(int j = i + 1; j < n; j++){
			if(A[j] < A[indexMin])
				indexMin = j;
		}
		int temp = A[i];
		A[i] = A[indexMin];
		A[intexMin] = temp;
	}
}