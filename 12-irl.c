#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a,const void* b){
	int A=(int*)a;
	int B=(int*)b;
	if (A>B)
	{
		return 1;
	}
	return 0;
}

int absolute_compare(int a,int b){
	if(abs(a)>abs(b))return 1;
	return 0;
}

void Bubblesort(int* A,int n,int (*compare)(int,int)){
	int i,j,temp;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			if (compare(A[j],A[j+1]))
			{
				temp=A[j];A[j]=A[j+1];A[j+1]=temp;
			}
		}
	}
}

int main(){
	int A[]={3,2,1,5,6,4};
	Bubblesort(A,6,absolute_compare);
	//qsort(A,6,sizeof(int),compare);
	for (int i = 0; i < 6; ++i)
	{
		printf("%d \n", A[i]);
	}
}