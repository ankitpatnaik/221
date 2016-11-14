//============================================================================
// Name        : bubble-sort.cpp
// Author      : Ankit Patnaik
// Date        :
// Copyright   : 
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"
#include <iostream>
using namespace std;


void BubbleSort::sort(int A[], int size)			// main entry point
{
	bool swapped=true;
	int i,j;
  /* Complete this function with the implementation of bubble sort algorithm 
     Record number of comparisons in variable num_cmps of class Sort
  */

for (i=0;i<size;i++)
	{
		if (!swapped)
		{
			for(j=1;j<size;j++)
				if (A[i]>A[i+1])
					{
						int temp=A[j];
						A[j]=A[j+1];
						A[j+1]=temp;          // swapping A[i+1] and A[i]
						swapped=false;
 					}

		}

}
}


