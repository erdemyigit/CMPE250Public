#include <iostream>

template<typename T>
class BinaryHeap {
public:
	BinaryHeap(int capacity = 100);
	BinaryHeap(const T* items, int n);
	bool isEmpty() const;
	bool isFull() const;
	void insert(const T & x);
	const T & getMin() const;
	T & deleteMin();
	void print(const std::ostream &) const;

private:
	unsigned int size;
	unsigned int capacity;
	T* array;
};

#include "BinaryHeap.cpp"
