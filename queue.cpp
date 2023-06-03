#include "queue.h"

Queue::Queue() { // инициализаци€ пустой очереди
	tail = nullptr;
}
Queue::~Queue() { // деструктор
	element* temp_prev = tail; 
		while (tail != nullptr) {
			tail = tail->prev;
			delete temp_prev; 
			temp_prev = tail; 
		}
}

void Queue::print() { // вывод очереди на экран
	element* temp = tail;
	while (temp != nullptr) {
		cout << temp->value << " -> ";
		temp = temp->prev;
	}
	cout << "голова" << endl;
}
void Queue::push(int curVal) { // добавление элемента в очередь
	element* newNode = new element;
	newNode->value = curVal;
	newNode->prev = tail; 
		tail = newNode;
}
int Queue::pop() { // удаление узла из очереди
	element* head = tail;
	if (tail == nullptr) {
		cout << "ќчередь пуста\n";
		return 0;
	}
	if (tail->prev == nullptr) {
		tail = nullptr;
	}
	else
	{
		element* prevHead = tail; 
		while (prevHead->prev->prev != nullptr) 
			prevHead = prevHead->prev; 
		head = prevHead->prev;
		prevHead->prev = nullptr; 
	}
	int val = head->value;
	delete head;
	return val;
}
element* Queue::nodeCopy() {
	element* tailNode = new element; 
	tailNode->prev = nullptr;
	element* copyTail = tailNode; 
	element* temp = tail; 
		while (temp != nullptr) {
			element* copyNode = new element;
			copyNode->value = temp->value;
			copyNode->prev = nullptr;
			copyTail->prev = copyNode;
			copyTail = copyTail->prev;
			temp = temp->prev;
		}
	copyTail = tailNode;
	tailNode = tailNode->prev; 
	delete copyTail;
	return tailNode;
}
Queue& Queue::copy() { 
	Queue* qCopy = new Queue;
	qCopy->tail = this->nodeCopy();
	return *qCopy;
}
Queue& Queue::merge(Queue& second) { 
	if (second.tail == nullptr) 
		return this->copy();
	if (this->tail == nullptr) 
		return second.copy();
	element* firstNodes = this->nodeCopy(); 
	element* secondNodes = second.nodeCopy(); 
	Queue* merged = new Queue;
	merged->tail = secondNodes; 
	while (secondNodes->prev != nullptr)
		secondNodes = secondNodes->prev;
	secondNodes->prev = firstNodes;
	return *merged;
}
void Queue::setTail(element* newTail) {
	this->tail = newTail;
}
element* Queue::getTail() {
	return tail;
}