#include "Node.h"
#include "LinkedList.h"
#include <conio.h>

void main()
{
	LinkedList *L1 = new LinkedList();
	L1->display();
	LinkedList *L2 = new LinkedList();
	L2->display();

	cout << "\n\n";
	L1->append(7);
	L1->display();
	cout << "\n\n";

	L1->append(11);
	L1->append(1);
	L1->display();
	cout << "\n\n";

	L1->addAfter(1, 4);
	L1->addAfter(7, 8);
	L1->display();
	cout << "\n\n";

	L1->addBefore(4, 3);
	L1->addBefore(11, 10);
	L1->display();
	cout << "\n\n";

	L1->deleteBeginning();
	L1->display();
	cout << "\n\n";

	L1->deleteEnd();
	L1->display();
	cout << "\n\n";

	L1->deleteAny(10);
	L1->display();
	cout<< "\n nodecount : " << L1->nodeCount();
	cout << "\n\n";

	L2->append_beginning(101);
	L2->append_beginning(100);
	L2->append(105);
	L2->append(104);
	L2->append(103);
//	L1->merge(L2);
	L2->display();
	cout<<"\n nodecount : " << L2->nodeCount();
	cout << "\n\n";

	L1->bubbleSort();
	cout << "\nL1 : \n";
	L1->display();
	cout << "\n\n";

	L2->bubbleSort();
	cout << "\nL2 : \n";
	L2->display();
	cout << "\n\n";

	L1->merge(L2);
	cout << "\nL1 <merge> L2 : \n";
	L1->display();
	cout << "\n\n";

	delete L1;

	LinkedList L3;
	L3.append(3);
	L3.append(33);
	L3.append(333);
	L3.append_beginning(-3);
	cout << "\nL3 : \n";
	L3.display();

	_getch();
}
