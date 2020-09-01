#include <iostream>
#include "DisjointSets.h"

using namespace std;

static const int ELEMENTS = 10;

int main() {

    DisjointSets sets(ELEMENTS);

    cout << sets << endl;
    sets.unionSets(1,5);
    sets.unionSets(2,7);
    sets.unionSets(1,2);

    for (int i = 1; i < ELEMENTS; i++) {
    	cout << "find(" << i << ")=";
    	cout << sets.find(i) << endl;
    }

    cout << sets << endl;

    return 0;
}
