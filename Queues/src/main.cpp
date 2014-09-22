#include "../headers/Queue.h"

int main()
{
	Queue *queue=new Queue();

	queue->enqueue(4);
	queue->enqueue(11);
	queue->enqueue(12);
	queue->enqueue(3);
	queue->enqueue(1);
	queue->enqueue(22);
	queue->enqueue(100);

	queue->print();

	queue->dequeue();
	queue->dequeue();
	queue->dequeue();
	queue->dequeue();

	queue->print();

	queue->dequeue();
	queue->dequeue();
	queue->dequeue();

	queue->print();
}