#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "Node.h"

class Queue
{
	private:
		Node *front, *rear;	
	public:
		Queue();
		int getFront();
		int dequeue();
		void enqueue(int value);
		void print();
};


#endif

