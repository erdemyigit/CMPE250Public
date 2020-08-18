#include <iostream>
#include "sorting.h"

using namespace std;

const int ARRAY_SIZE = 10;

int *randomArray(int n) {
	// reset random seed to generate the same numbers each time
	srand(1);

	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = (rand() % 100);
	}
	return a;
}

void printArray(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return;
}


int main() {
	int *a;

	cout << "insertionSort" << endl;
	a = randomArray(ARRAY_SIZE);
	printArray(a, ARRAY_SIZE);
	insertionSort(a, ARRAY_SIZE);
	printArray(a, ARRAY_SIZE);
	cout << endl;


	cout << "mergeSort" << endl;
	a = randomArray(ARRAY_SIZE);
	printArray(a, ARRAY_SIZE);
	mergeSort(a, ARRAY_SIZE);
	printArray(a, ARRAY_SIZE);
	cout << endl;

	cout << "quicksort" << endl;
	a = randomArray(ARRAY_SIZE);
	printArray(a, ARRAY_SIZE);
	quickSort(a, ARRAY_SIZE);
	printArray(a, ARRAY_SIZE);
	cout << endl;

	return 0;
}
