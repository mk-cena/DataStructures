#include "../headers/Node.h"

Node::Node(int value)
{
	this->value=value;
}

Node::Node* Node::getNext()
{
	return this->next;
} 

int Node::getValue()
{
	return this->value;
}

void Node::setNext(Node *node)
{
	this->next=node;
}

void Node::print()
{
	cout<<this->value<<" ";
}