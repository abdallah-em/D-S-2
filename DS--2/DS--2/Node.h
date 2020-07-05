#pragma once
#include<string>

template <class T>
class Node
{
public:
	T value;
	Node<T>* next;

	Node(T val);
};

