#pragma once
#include <iostream>
using namespace std;
struct element { 
	int value;
	element* prev; 
};
class Queue {
public:
	Queue(); 
	~Queue(); 
	void print();
	void push(int);
	int pop();
	element* nodeCopy(); 
	Queue& copy();
	Queue& merge(Queue&); 
	element* getTail(); 
	void setTail(element*); 
private:
	element* tail; 
};