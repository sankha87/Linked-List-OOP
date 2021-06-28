#pragma once
class Node
{
	int data;
	Node *next;

public:
	Node();
	~Node();
	Node(int value);
	int getData();
	Node* getNext();
	void setData(int value);
	void setNext(Node *node);
};

