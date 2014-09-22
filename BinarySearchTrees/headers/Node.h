#ifndef __NODE_H__
#define __NODE_H__

class Node
{
	private:
		int value;
		Node *left, *right;
	public:
		Node(int value);
		Node* getLeft();
		Node* getRight();
		int getValue();
		void setLeft(Node *node);
		void setRight(Node *node);
};

#endif