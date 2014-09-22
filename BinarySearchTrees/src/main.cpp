#include "../headers/BinarySearchTree.h"

int main()
{
	BinarySearchTree *bst = new BinarySearchTree();

	bst->add(10);

	bst->printPre();

	bst->add(5);
	bst->add(8);
	bst->add(3);

	bst->printPre();

	bst->add(20);
	bst->add(25);
	bst->add(15);

	bst->printPre();

	cout<<"Depth: "<<bst->getMaxDepth()<<endl;

	cout<<"Found: "<<bst->find(31)<<endl;
	cout<<"Found: "<<bst->find(25)<<endl;
}