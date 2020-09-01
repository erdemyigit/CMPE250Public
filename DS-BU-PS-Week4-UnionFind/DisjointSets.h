/*
 * DisjointSets.h
 *
 */

#ifndef DISJOINTSETS_H_
#define DISJOINTSETS_H_

#include <iostream>

class DisjointSets {
friend std::ostream & operator<< (std::ostream &, const DisjointSets &);
public:
	explicit DisjointSets(int n);
	virtual ~DisjointSets();
	int find(int);
	void unionSets(int, int);
private:
};

#endif /* DISJOINTSETS_H_ */
