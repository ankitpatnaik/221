//============================================================================
// Name        : selection-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

//#include "sort.h"
#include <iostream>
using namespace std;

void selection_sort(int A[], int size)				// main entry point
{
  /* Complete this function with the implementation of selection sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  Ascending order
  */
  int i,j,min_;

for (i=0;i<size-1;i++)
{
	min_= i;
	for (j=i+1;j<size;j++)
	{
		if (A[j]<A[min_])
		min_=j;
	
	}
		int temp=A[i];
		A[i]=A[min_];
		A[min_]=temp;
}
}

int main(){
int arrayy[]={4,1,7,3,2};
selection_sort(arrayy,5);

for (int i=0;i<5;i++)
	{cout<<arrayy[i]<<endl;}

}
