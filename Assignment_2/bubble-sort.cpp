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


///#include "sort.h"
#include <iostream>
using namespace std;


void bubble_sort(int arrayy[5], int size)			// main entry point
{
	//bool swapped=true;
	int i,j;
  /* Complete this function with the implementation of bubble sort algorithm 
     Record number of comparisons in variable num_cmps of class Sort
  */

for (i=0;i<size-1;i++)
	{
		//cout<<"Test1";
		//if (swapped)
		{
			//cout<<"Test2";
			for(j=0;j<size-i-1;j++)
				if (arrayy[j]>arrayy[j+1])
					{
						//cout<<"Test3";
						int temp=arrayy[j];
						arrayy[j]=arrayy[j+1];
						arrayy[j+1]=temp;          // swapping A[i+1] and A[i]
						//swapped=false;
						//cout<<arrayy[j]<<'\t'<<arrayy[j+1]<<endl;
 					}

		}

}
}

int main(){
int arrayy[]={4,1,7,3,2};
bubble_sort(arrayy,5);

for (int i=0;i<5;i++)
	{cout<<arrayy[i]<<endl;}

}

