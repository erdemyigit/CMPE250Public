/*
 * Homework1Solution.cpp
 *
 *      Author: cmshalom
 */
#include<iostream>

#define MAX_N 1000
int *Fibonacci=NULL;

int fibonacciRecursive(int n, int &steps) {
	steps++;
	if (n <= 1) {
		return 1;
	}
	return fibonacciRecursive(n-1, steps) + fibonacciRecursive(n-2, steps);
}


void initTable() {
    if (!Fibonacci) Fibonacci=new int[MAX_N];
	for (int i=0; i<MAX_N; i++) {
		Fibonacci[i]=-1;
	}
}

int getFromTable(int i) {
	if (Fibonacci == NULL) initTable();
	return Fibonacci[i];
}

void setTable(int i, int value) {
	Fibonacci[i] = value;
}

int fibonacciWithMemoization(int n, int &steps) {
	steps++;
	int ret = getFromTable(n);
	if (ret != -1) return ret;
	ret = n <= 1 ? 1 : fibonacciWithMemoization(n-1, steps) + fibonacciWithMemoization(n-2, steps);
	setTable(n,ret);
	return ret;
#undef MAX_N
}

int fibonacciWithDynamicProgramming(int n, int &steps) {
	initTable();
	Fibonacci[0]=Fibonacci[1]=1;
	steps++;
	for (int i = 2; i<=n; i++) {
		steps++;
		Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
	}
	return Fibonacci[n];
}
