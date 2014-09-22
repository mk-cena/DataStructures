#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <stdio.h>
#include <iostream>
#include "../headers/Node.h"

using namespace std;

class LinkedList
{
	private:
		Node *head;
	
	public:
		LinkedList();
		void add(int number);
		void print();
		void removeFirst();
		void remove(int value);
};


#endif