#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList
{
	Node *head;

public:
	LinkedList();
	~LinkedList();

	Node* getHead();
	Node* getLast();
	void display();
	void append_beginning(int value);
	void append(int value);
	void addBefore(int node, int value);
	void addAfter(int node, int value);
	void deleteBeginning();
	void deleteEnd();
	void deleteAny(int value);
	void merge(LinkedList *L2);
	int nodeCount();
	void bubbleSort();
	void swap(Node *a, Node*b);
};

