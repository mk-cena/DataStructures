#ifndef __NODE_H__
#define __NODE_H__

#include <iostream>

using namespace std;

class Node
{
	private:
		int value;
		Node *next;

	public:
		Node(int value);
		Node* getNext();
		void setNext(Node *node);
		int getValue();
		void print();
		
};

#endif