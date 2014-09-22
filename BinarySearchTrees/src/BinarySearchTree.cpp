#include "../headers/BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
	this->root=NULL;
}

void BinarySearchTree::add(int value)
{
	if(root==NULL)
		root=new Node(value);
	else
		add(value, root, NULL);
}

void BinarySearchTree::add(int value, Node *current, Node *parent)
{
	if(current==NULL)
	{
		current=new Node(value);
		if(parent->getValue()<value)	
			parent->setRight(current);
		else
			parent->setLeft(current);
	}
	else
	{
		if(current->getValue()>value)
			add(value, current->getLeft(), current);
		else
			add(value, current->getRight(), current);
	}
}

void BinarySearchTree::printPre()
{
	printPre(root);
	cout << endl;
}

void BinarySearchTree::printPre(Node *node)
{
	if(node == NULL)
		return;
	
	cout<<node->getValue()<<" ";
	printPre(node->getLeft());
	printPre(node->getRight());
}

bool BinarySearchTree::find(int value)
{
	find(value, root);
}

bool BinarySearchTree::find(int value, Node *current)
{
	if(current==NULL)
		return false;
	if(current->getValue()==value)
		return true;
	else
		if(current->getValue()>value)
			return find(value, current->getLeft());
		else
			return find(value, current->getRight());
}

int BinarySearchTree::getMaxDepth()
{
	return getMaxDepth(this->root);
}


int BinarySearchTree::getMaxDepth(Node *node)
{
	if(node==NULL)
		return 0;
	else
		return max(1+getMaxDepth(node->getRight()),1+getMaxDepth(node->getLeft()));
}