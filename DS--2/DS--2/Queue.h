#pragma once
#include"Node.h"
#include"Node.cpp"
#include<string>
#include<assert.h>


template <class T>
class Queue
{
private:
	Node<T>* head;
	Node<T>* tail;
	int size;

public:
	T front();
	void push(T val);
	void pop();
	int getsize();
	bool empty();
	Queue();
	~Queue();


};
