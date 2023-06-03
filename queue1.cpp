#include "queue1.h"


int QueuePublic::sumResult() {
	float Average = 0;
	int count = 0;
	element* Head;
	Head = getTail();
	while (Head != nullptr) {
		Average += float(Head->value);
		Head = Head->prev;
		count++;
	}
	Average = Average / count;
	Head = getTail();
	int sum = 0;
	while (Head != nullptr) {
		if (float(Head->value) < Average) {
			sum += Head->value;
		}
		Head = Head->prev;
	}
	return sum;
}
QueuePublic& QueuePublic::copy() { 
	QueuePublic* qCopy = new QueuePublic;
	qCopy->setTail(this->nodeCopy()); 
	return *qCopy;
}
QueuePublic& QueuePublic::merge(QueuePublic& second) { 
	if (second.getTail() == nullptr)
		return this->copy();
	if (this->getTail() == nullptr)
		return second.copy();
	element* firstNodes = this->nodeCopy(); 
	element* secondNodes = second.nodeCopy(); 
	QueuePublic* merged = new QueuePublic;
	merged->setTail(secondNodes);
	while (secondNodes->prev != nullptr)
		secondNodes = secondNodes->prev; 
	secondNodes->prev = firstNodes;
	return *merged;
}
int QueuePrivate::sumResult() {
	float Average = 0;
	int count = 0;
	element* Head;
	Head = getTail();
	while (Head != nullptr) {
		Average += float(Head->value);
		Head = Head->prev;
		count++;
	}
	Average = Average / count;
	Head = getTail();
	int sum = 0;
	while (Head != nullptr) {
		if (float(Head->value) < Average) {
			sum += Head->value;
		}
		Head = Head->prev;
	}
	return sum;
}
void QueuePrivate::print() {
	Queue::print();
}
void QueuePrivate::push(int val) {
	Queue::push(val);
}
int QueuePrivate::pop() {
	return Queue::pop();
}
element* QueuePrivate::nodeCopy() {
	return Queue::nodeCopy();
}
QueuePrivate& QueuePrivate::copy() { 
	QueuePrivate* qCopy = new QueuePrivate;
	qCopy->setTail(this->nodeCopy());
	return *qCopy;
}
QueuePrivate& QueuePrivate::merge(QueuePrivate& second) { 
	if (second.getTail() == nullptr)
		return this->copy();
	if (this->getTail() == nullptr)
		return second.copy();
	element* firstNodes = this->nodeCopy();
	element* secondNodes = second.nodeCopy();
	QueuePrivate* merged = new QueuePrivate;
	merged->setTail(secondNodes);
	while (secondNodes->prev != nullptr)
		secondNodes = secondNodes->prev;
	secondNodes->prev = firstNodes; 
	return *merged;
}
element* QueuePrivate::getTail() {
	return Queue::getTail();
}
void QueuePrivate::setTail(element* tail) {
	Queue::setTail(tail);
}
int QueueProtected::sumResult() {
	float Average = 0;
	int count = 0;
	element* Head;
	Head = getTail();
	while (Head != nullptr) {
		Average += float(Head->value);
		Head = Head->prev;
		count++;
	}
	Average = Average / count;
	Head = getTail();
	int sum = 0;
	while (Head != nullptr) {
		if (float(Head->value) < Average) {
			sum += Head->value;
		}
		Head = Head->prev;
	}
	return sum;
}
void QueueProtected::print() {
	Queue::print();
}
void QueueProtected::push(int val) {
	Queue::push(val);
}
int QueueProtected::pop() {
	return Queue::pop();
}
element* QueueProtected::nodeCopy() {
	return Queue::nodeCopy();
}
QueueProtected& QueueProtected::copy() { 
	QueueProtected * qCopy = new QueueProtected;
	qCopy->setTail(this->nodeCopy());
	return *qCopy;
}
QueueProtected& QueueProtected::merge(QueueProtected& second) { 
	if (second.getTail() == nullptr)
		return this->copy();
	if (this->getTail() == nullptr)
		return second.copy();
	element* firstNodes = this->nodeCopy();
	element* secondNodes = second.nodeCopy();
	QueueProtected* merged = new QueueProtected;
	merged->setTail(secondNodes);
	while (secondNodes->prev != nullptr)
		secondNodes = secondNodes->prev;
	secondNodes->prev = firstNodes;
	return *merged;
}
element* QueueProtected::getTail() {
	return Queue::getTail();
}
void QueueProtected::setTail(element* tail) {
	Queue::setTail(tail);
}