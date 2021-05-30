/*
C functions- malloc,calloc,realloc,free
C++ operators- new,delete
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	int *p;
	p=(int*)malloc(sizeof(int));
	*p=10;
	free(p);
	p=(int*)malloc(sizeof(int));
	*p=20;
	p=(int*)malloc(5*sizeof(int));//*p -> p[0] , *(p+1) -> p[1]


}
//in cpp

int main(){
	int a;
	int *p;
	p= new int;
	*p=10;
	delete(p);
	p= new int[5];//*p -> p[0] , *(p+1) -> p[1]
	delete(p);
	
}
