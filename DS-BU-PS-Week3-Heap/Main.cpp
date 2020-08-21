#include <iostream>
#include <vector>

#include "BinaryHeap.h"

using namespace std;

const int ARRAY_SIZE = 10;

int *randomArray(int n) {
	// reset random seed to generate the same numbers each time
	srand(1);

	int *a = new int[n];
	for (int i = 0; i < ARRAY_SIZE; i++) {
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
	int *a = randomArray(ARRAY_SIZE);
	cout << "Random Array";
	printArray(a, ARRAY_SIZE);

	cout << "Using Default constructor" << endl;
	BinaryHeap<int> bh1;
	for (unsigned int i = 0; i < ARRAY_SIZE; i++) {
		bh1.insert(a[i]);
	}
	cout << "RESULTING HEAP" << endl;
	bh1.print(cout);

	cout << "Using Heapify" << endl;
	BinaryHeap<int> bh2(a, ARRAY_SIZE);
	bh2.print(cout);
	cout << "RESULTING HEAP:";
	bh2.print(cout);
	cout << endl;

	cout << "SORTED";
    while(!bh2.isEmpty()) {
    	int i = bh2.deleteMin();
    	cout << i << " ";
    }
	cout << endl;

	return 0;
}
