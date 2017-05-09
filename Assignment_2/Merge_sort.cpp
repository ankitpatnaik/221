
#include <iostream>
#include <math.h>
using namespace std;

void merge(int L[],int R[],int A[],int nl,int nr){
	int i=0,j=0,k=0; //i index of left, j index of right

	while (i<nl && j<nr) // if I,j are valid
	{
		if (L[i] < R[j])
		{
			A[k]=L[i];
			i++;
		}//next unpicked pos)}
		else
		{
			A[k]=R[j];
			j++;//next pos);
		}	
		k++; 
	}
	while (i<nl)
	{
		A[k]=L[i];
		i++;k++;
	}
	while (j<nr)
	{
		A[k]=R[j];
		j++;k++;
	}
}






void merge_sort(int A[],int n)	
{
	int num_ele=n;
	int mid=ceil(num_ele/2);// floor of odd
	int L[mid], R[n-mid];
	
	//n-mid=right count
	if (num_ele<2)
		return;

	for (int i=0;i<mid;i++)
	{
		L[i]=A[i];
	}
	for (int i=mid;i<num_ele;i++)
	{
		R[i-mid]=A[i];
	}

	merge_sort(L,mid);
	merge_sort(R,num_ele-mid);
	merge(L,R,A,mid,num_ele-mid);
}

int main(){
	int A[]={4,25,12,11};
	int n=5;
	merge_sort(A,n);
	for (int i=0;i<5;i++)
	{cout<<A[i]<<endl;}
}
