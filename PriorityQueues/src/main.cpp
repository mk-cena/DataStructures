#include "../headers/PriorityQueue.h"

int main()
{
	PriorityQueue *pq = new PriorityQueue();

	pq->insert(30);
	
	pq->print();

	pq->insert(10);

	pq->print();

	pq->insert(40);
	pq->insert(26);

	pq->print();

	pq->insert(15);
	pq->insert(5);
	pq->insert(43);
	pq->insert(100);

	pq->print();

	pq->remove();
	pq->remove();

	pq->print();


	pq->remove(100);
	pq->remove(30);
	pq->remove(15);

	pq->print();
}