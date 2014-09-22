#include "../headers/Node.h"

Node::Node(int value)
{
	this->value=value;
}

Node::Node* Node::getNext()
{
	return this->next;
}

void Node::setNext(Node *node)
{
	this->next=node;
}

int Node::getValue()
{
	return this->value;
}