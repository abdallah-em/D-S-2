#pragma once

template <class T>
class Node
{
public:
	int value;
	Node<T>* next;

	Node(T val);
};

