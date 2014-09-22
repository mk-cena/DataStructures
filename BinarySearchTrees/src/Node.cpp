#include "../headers/Node.h"

Node::Node(int value)
{
	this->value=value;
}

Node* Node::getRight()
{
	return this->right;
}

Node* Node::getLeft()
{
	return this->left;
}

int Node::getValue()
{
	return this->value;
}

void Node::setLeft(Node *node)
{
	this->left=node;
}

void Node::setRight(Node *node)
{
	this->right=node;
}