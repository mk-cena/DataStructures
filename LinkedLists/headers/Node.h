#ifndef __NODE_H__
#define __NODE_H__

class Node
{
	private:
		int value;
		Node *next;
	public:
		Node(int value);
		int getValue();
		void setNext(Node *node);
		Node* getNext();	
};

#endif