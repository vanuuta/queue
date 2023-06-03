#pragma once
#include "queue.h"
class QueuePublic : public Queue {
public:
	int sumResult();
	QueuePublic& copy();
	QueuePublic& merge(QueuePublic&); 
};
class QueuePrivate : private Queue {
public:
	int sumResult();
	void print();
	void push(int);
	int pop();
	element* nodeCopy();
	QueuePrivate& copy();
	QueuePrivate& merge(QueuePrivate&);
	element* getTail();
	void setTail(element*);
};
class QueueProtected : protected Queue {
public:
	int sumResult();
	void print();
	void push(int);
	int pop();
	element* nodeCopy();
	QueueProtected& copy();
	QueueProtected& merge(QueueProtected&);
	element* getTail();
	void setTail(element*);
};