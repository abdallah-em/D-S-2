#pragma once
#include"Node.h"
#include"Node.cpp"
#include<string>
#include<assert.h>

template <class T>
class Queue
{
public:
	Node<T>* head;
	Node<T>* tail;
	int size;


	T front();
	T back();
	void push(T val);
	void pop();
	int getsize();
	bool empty();
	Queue();
	~Queue();


};
