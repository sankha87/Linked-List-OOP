#include "Node.h"
#include <iostream>

Node::Node()
{
	this->data = 0;
	this->next = NULL;
}

Node::~Node()
{
	delete this->next;
}

Node::Node(int value)
{
	this->data = value;
	this->next = NULL;
}

int Node::getData()
{
	return this->data;
}

Node* Node::getNext()
{
	return this->next;
}

void Node::setData(int value)
{
	this->data = value;
}

void Node::setNext(Node* node)
{
	this->next = node;
}
