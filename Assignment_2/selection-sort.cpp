//============================================================================
// Name        : selection-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void SelectionSort::sort(int A[], int size)				// main entry point
{
  /* Complete this function with the implementation of selection sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort

  Ascending order
  */
for (i=0;i<size;i++)
	for (j=i+1;j<size;j++)
	{
		if (A[i]>A[j])
			{
				temp=A[i];
				A[i]=A[j+1];
				A[j+1]=temp;
			}	
	}
}
