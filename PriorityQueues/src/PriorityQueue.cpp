#include "../headers/PriorityQueue.h"

PriorityQueue::PriorityQueue()
{
	head=NULL;
}

void PriorityQueue::insert(int value)
{
	if(head==NULL)
	{
		head=new Node(value);
		return;
	}

	Node *current=head, *previous;

	while(current!=NULL && current->getValue() < value)
	{
		previous=current;
		current=current->getNext();
	}

	if(current==head)
	{
		current=new Node(value);
		current->setNext(head);
		head=current;
		return;
	}
	else
	{
		previous->setNext(new Node(value));
		previous->getNext()->setNext(current);	
	}
}

int PriorityQueue::remove()
{
	int value=head->getValue();
	Node *tmp=head;
	head=head->getNext();
	delete tmp;
	
	return value;	
}

void PriorityQueue::remove(int value)
{
	Node *current=head, *previous;

	while(current!=NULL && current->getValue()!=value)
	{
		previous=current;
		current=current->getNext();
	}

	if(current!=NULL)
	{
		if(current==head)
			head=current->getNext();
		else
			previous->setNext(current->getNext());
		delete current;
	}
 
}

void PriorityQueue::print()
{
	Node *current=head;
	while(current!=NULL)
	{
		cout<<current->getValue()<<" ";
		current=current->getNext();
	}
	cout<<endl;
}