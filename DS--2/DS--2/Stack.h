#pragma once
#include"Node.h"
#include<assert.h>

class Stack
{
private:

	Node* head;
	int size;

public:

	int top();
	void pop();
	void push(int val);
	bool empty();
	int getSize();
	Stack();


};

