#include<stdio.h>
#include<stdlib.h>

void print(){
	printf("HelloWorld\n");
}
int *Add(int* a,int* b){
	// int c=(*a)+(*b);
	int* c =(int*)malloc(sizeof(int));
	*c=(*a)+(*b);
	
	return &c;
}
int main(){
	int a=2,b=4;
	int* ptr=Add(&a,&b);
	//Memory gets deallocated from stack
	print();
	printf("%d\n", *ptr);
}
