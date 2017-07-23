#include <iostream>
using namespace std;

void BubbleSort(int A[], int n){
	for(int k = 0; k < n; k++){
		bool swapped = false
		for(int i = 0; i < n - k; i++){
			if(A[i] > A[i + 1]){
				int temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
				swapped = true
			}		
			if(swapped == false)
				break;
		}
	}
}
