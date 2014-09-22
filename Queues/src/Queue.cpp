#include "../headers/Queue.h"

Queue::Queue()
{
	this->front=this->rear=NULL;
}

int Queue::getFront()
{
	this->front->getValue();
}

void Queue::enqueue(int value)
{
	Node *tmp=new Node(value);
	if(front==NULL)
		this->front=tmp;
	else
		this->rear->setNext(tmp);
	this->rear=tmp;
}

int Queue::dequeue()
{
	Node *tmp=front;
	int value=this->front->getValue();
	this->front=this->front->getNext();
	delete tmp;

	return value;
}

void Queue::print()
{
	for(Node *current=front;current!=NULL;current=current->getNext())
		current->print();
	cout<<endl;
}
