#include "LinkedList.h"

LinkedList::LinkedList()
{
	this->head = NULL;
}

LinkedList::~LinkedList()
{
	while (this->head != NULL)
	{
		Node *prev = this->head;
		Node *curr = prev->getNext();

		while (curr != NULL && curr->getNext() != NULL)
		{
			curr = curr->getNext();
			prev = prev->getNext();
		}
		prev->setNext(NULL);

		if (curr != NULL)
		{
			delete curr;
			curr = NULL;
		}
		else if (curr == NULL)
		{
			delete prev;
			this->head = NULL;
		}
	}
}

Node* LinkedList::getHead()
{
	return this->head;
}

Node* LinkedList::getLast()
{
	Node *temp = this->head;
	while (temp->getNext() != NULL)
		temp = temp->getNext();
	
	return temp;
}

void LinkedList::display()
{
	Node *temp = this->head;
	if (this->head == NULL)
	{
		cout << "\n head is null \n";
		return;
	}
	while (temp != NULL)
	{
		cout << temp->getData() << " ";
		temp = temp->getNext();
	}
}

void LinkedList::append_beginning(int value)
{
	Node *newnode = new Node(value);
	newnode->setNext(this->head);
	this->head = newnode;
}

void LinkedList::append(int value)
{
	Node *newnode = new Node(value);
	Node *curr = this->head;
	if (curr == NULL)
	{
		curr = newnode;
		this->head = curr;
	}
	else
	{
		while (curr->getNext() != NULL)
			curr = curr->getNext();
		curr->setNext(newnode);
	}
}

void LinkedList::addBefore(int node, int value)
{
	Node *newnode = new Node(value);
	Node *curr = this->head;
	while (curr->getNext()->getData() != node)
		curr = curr->getNext();
	
	newnode->setNext(curr->getNext());
	curr->setNext(newnode);
}

void LinkedList::addAfter(int node, int value)
{
	Node *newnode = new Node(value);
	Node *curr = this->head;

	while (curr->getData() != node)
		curr = curr->getNext();

	newnode->setNext(curr->getNext());
	curr->setNext(newnode);
}

void LinkedList::deleteBeginning()
{
	Node *temp = this->head;
	this->head = this->head->getNext();
	temp->setNext(NULL);
	delete temp;
}

void LinkedList::deleteEnd()
{
	Node *curr = this->head;
	while (curr->getNext()->getNext() != NULL)
		curr = curr->getNext();

	Node *temp = curr->getNext();
	delete temp;
	curr->setNext(NULL);
}

void LinkedList::deleteAny(int value)
{
	Node *curr = this->head;

	while (curr->getNext()->getData() != value)
		curr = curr->getNext();

	Node *temp = curr->getNext();

	curr->setNext(curr->getNext()->getNext());
	temp->setNext(NULL);
	delete temp;
}

void LinkedList::merge(LinkedList * L2)
{
	Node *first = this->head;
	Node *second = L2->head;
	while (first->getNext() != NULL)
		first = first->getNext();

	first->setNext(second);
}

int LinkedList::nodeCount()
{
	Node *temp = this->head;
	int i = 0;
	while (temp != NULL)
	{
		temp = temp->getNext();
		i++;
	}
	return i;
}

void LinkedList::bubbleSort()
{
	for (int i = 0; i < this->nodeCount() - 1; i++)
	{
		Node *head_ref2 = this->head;

		int flag = 0;

		for (int j = 0; j < this->nodeCount() - i - 1; j++)
		{
			if (head_ref2->getData() > head_ref2->getNext()->getData())
			{
				swap(head_ref2, head_ref2->getNext());
				flag = 1;
			}
			head_ref2 = head_ref2->getNext();
		}
		 // if value of flag is zero after all the iterations of inner loop then break out
		if (flag == 0)
		{
			break;
		}
	}
}

void LinkedList::swap(Node * a, Node * b)
{
	int temp = a->getData();
	a->setData(b->getData());
	b->setData(temp);
}


