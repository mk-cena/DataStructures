#ifndef __BINARYSEARCHTREE_H__
#define __BINARYSEARCHTREE_H__

#include "Node.h"
#include <iostream>
#include <stdio.h>

using namespace std;

class BinarySearchTree
{
	private:
		Node *root;
		void add(int value, Node *current, Node *parent);
		void printPre(Node *node);
		bool find(int value, Node *current);
		int getMaxDepth(Node *node);

	
	public:
		BinarySearchTree();
		void add(int value);
		void printPre();
		bool find(int value);
		int getMaxDepth();
};

#endif