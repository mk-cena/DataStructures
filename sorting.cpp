#include <vector>
#include <stdio.h>
#include <iostream>
#include <limits.h>

using namespace std;

void bubble(int *array,int size)
{
	for(int i=0;i<size-1;i++)
		for(int j=0;j<size-1-i;j++)
			if(array[i]>array[i+1])
			{
				int tmp=array[i];
				array[i]=array[i+1];
				array[i+1]=tmp;
			}
}

void insertion(int *array, int size)
{
	for(int i=1;i<size;i++)
	{
		int j,item=array[i];
		for(j=i-1;j>=0&&item<array[j];j--)
			array[j+1]=array[j];
		array[j+1]=item;
	}
}

int partition(int *array, int start,int end)
{
	int p=start-1,element=array[end],tmp;

	for(int i=start;i<end;i++)
		if(array[i]<element)
		{
			p++;
			tmp=array[p];
			array[p]=array[i];
			array[i]=tmp;
		}

	array[end]=array[p+1];
	array[p+1]=element;

	return p+1;
}

void quick(int *array, int start, int end)
{
	if(start<=end)
	{
		int pivot=partition(array,start,end);
		quick(array,start,pivot-1);
		quick(array,pivot+1,end);	
	}
}


void print(int *array, int size)
{
	for(int i=0;i<size;i++)
		cout<<array[i]<<" ";
	cout<<endl;
}

bool binarySearch(int *array,int start,int end,int element)
{
	int middle=start+(end-start)/2;

	if(start>end)
		return false;

	if(array[middle]==element)
		return true;

	if(array[middle]>element)
		return binarySearch(array,start,middle-1,element);
	else
		return binarySearch(array,middle+1,end,element);
}

void topologicalSort(int *array, int start, int end)
{
	int middle = start + (end-start)/2;

	if(start>end)
		return;
	
	cout<<array[middle]<<" ";

	topologicalSort(array,start,middle-1);
	topologicalSort(array,middle+1,end);
}

void merge(int *array, int start, int middle, int end)
{
	int sizeL=middle-start+2;
	int sizeR=end-middle+1;
	int *left=new int[sizeL];
	int *right=new int [sizeR];
	left[sizeL-1]=right[sizeR-1]=INT_MAX-1;

	for(int i=0;i<sizeL-1;i++)
		left[i]=array[i+start];
	
	for(int i=0;i<sizeR-1;i++)
		right[i]=array[i+middle+1];

	for(int i=0,j=0,k=0;i<sizeR+sizeL-2;i++)
		array[i+start]=(left[j]<right[k])?left[j++]:right[k++];
}

void mergeSort(int *array, int start, int end)
{
	if(start<end)
	{
		int middle=(end+start)/2;
		mergeSort(array,start,middle);
		mergeSort(array,middle+1,end);
		merge(array,start,middle,end);
	}
}

int main()
{
	int size=30;
	int *array=new int[size];
	for(int i=0;i<size;i++)
		array[i]=size-i;
	
	// print(array,size);
	// insertion(array,size);
	// print(array,size);

	// print(array,size);
	// bubble(array,size);
	// print(array,size);

	// print(array,size);
	// quick(array,0,size-1);
	// print(array,size);

	// print(array,size);
	// mergeSort(array,0,size-1);
	// print(array,size);

	// topologicalSort(array,0,size-1);

	// cout << endl;
	
	// cout<<"Found: "<<binarySearch(array,0,size-1,3)<<endl;
}