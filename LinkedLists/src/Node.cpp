#include "../headers/Node.h"

Node::Node(int value)
{
	this->value=value;
}

void Node::setNext(Node *node)
{
	this->next=node;
}

int Node::getValue()
{
	return this->value;
}

Node* Node::getNext()
{
	return this->next;
}