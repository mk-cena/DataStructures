#ifndef __PRIORITYQUEUE_H__
#define __PRIORITYQUEUE_H__

#include "Node.h"
#include <stdio.h>
#include <iostream>

using namespace std;

class PriorityQueue
{
	private:
		Node *head;

	public:
		PriorityQueue();
		void insert(int value);
		int remove();
		void print();
		void remove(int value);
};

#endif