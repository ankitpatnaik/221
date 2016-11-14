//============================================================================
// Name        : insertion-sort.cpp
// Author      : Ankit Patnaik
// Date        :
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void InsertionSort::sort(int A[], int size)				// main entry point
{
  /* Complete this function with the implementation of insertion sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */


for (int i=1;i<size;i++)
	{
		int checkval=A[i];//saving value of A[i] to compare in loop
		int j=i;
		cout<<endl;

		//cout<<checkval<<'\t'<<j<<'\t'<<A[j]<<endl;

		while (j>0 && A[j-1]>checkval) // here swapping within the substrings
			{
				int tmp = A[j];
            			A[j] = A[j - 1];
            			A[j - 1] = tmp;
				j=j-1;
			} 

		}

}
