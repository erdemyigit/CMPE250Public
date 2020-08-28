#include<iostream>
#include<climits>
using namespace std;

// Matrix A_i has dimension p[i-1] x p[i] for i = 1..n
// Returns the smallest number of (real) multiplications needed to compute A_1 x ... x A_n
// It also returns (in two reference parameters the two dimensional arrays m and s described in the slides.
// Recall that m[i,j] contains the smallest number of (real) multiplications
// needed to compute A_i x .... x A_j
// and that s[i,j] contains the best index k so that the parenthesization
// (A_i x .... x A_k) x (A_{k+1} x .... x A_j) is optimal
int MatrixChainOrderDP(int p[], int n, ... s, ... m) {
}

// Given the matrix s (described above), print a string such as
// ((A_1 A_2) ((A_3 A_4) A_5))
// The above result is obtained from s[1,5]=2, s[3,5]=4 and the trivial values s[1,2]=1 and s[3,4]=3.
// that describes the optimal parenthesization determined by s.
void printOptimalParenthesization(int n, ... s) {

}



// -----------------------------------------------------------------------

int main() {
	// Dimensions of the matrices
	int p[] = { 10, 100, 5, 50, 10 };
	int n = sizeof(p) / sizeof(p[0]);

	cout << "The smallest number of operations is: " << MatrixChainOrderDP(p, n, ...) << endl;
	cout << "It can be obtained by computing as: ";
	printOptimalParenthesization(n, ...);

	return 0;
}
