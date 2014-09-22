#include "../headers/LinkedList.h"

LinkedList::LinkedList()
{
	head=NULL;
}

void LinkedList::add(int value)
{

	Node *node = new Node(value);
	node->setNext(head);
	this->head=node;

}

void LinkedList::removeFirst()
{
	Node *tmp=this->head;
	head=head->getNext();
	delete tmp;
}

void LinkedList::remove(int value)
{
	Node *current = head,*previous=NULL;
	while(current!=NULL && current->getValue()!=value)
	{
		previous=current;
		current=current->getNext();
	}

	if(current!=NULL)
	{
		previous->setNext(current->getNext());
		delete current;
	}
	
}

void LinkedList::print()
{
	Node *current=head;

	while(current!=NULL)
	{
		cout<<current->getValue()<<" ";
		current=current->getNext();
	}
	cout << endl;
}