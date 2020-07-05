#include "Stack.h"

int Stack::top()
{
	assert(empty() == false);
	return head->value;
}

void Stack::pop()
{
	assert(empty() == false);
	Node* tmp = head;
	head = head->next;
	delete tmp;
	size--;
}

void Stack::push(int val)
{
	Node* newNode = new Node(val);
	newNode->next = head;
	head = newNode;
	size++;
}

bool Stack::empty()
{
	if (size == 0)
		return true;
	else
    	return false;
}

int Stack::getSize()
{
	return size;
}

Stack::Stack() : head(nullptr) , size(0)
{

}

Stack::~Stack()
{
	while (empty() == false)
	{
		pop();
	}
}
