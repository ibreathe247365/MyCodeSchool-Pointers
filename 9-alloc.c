/*
malloc- void* p=malloc(3*sizeof(int))
void* p=malloc(3*sizeof(int))-need to typecast to use
int* p=(int*)malloc(3*sizeof(int))

calloc- void* p=calloc(size_t num,size_t size)
initialised to 0
int* p=(int*)calloc(3,sizeof(int))

realloc- void* realloc(void* ptr,size_t size)
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d\n", &n);
	int *A=(int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		A[i]=i+1;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", A[i]);
	}
	free(A);
}