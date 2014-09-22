#include "../headers/LinkedList.h"

int main()
{
	LinkedList *linkedlist=new LinkedList();
	
	linkedlist->add(4);
	linkedlist->add(5);
	linkedlist->add(6);
	linkedlist->add(10);
	linkedlist->add(3);
	linkedlist->add(14);
	
	linkedlist->print();

	linkedlist->removeFirst();

	linkedlist->print();

	linkedlist->remove(6);

	linkedlist->print();
}