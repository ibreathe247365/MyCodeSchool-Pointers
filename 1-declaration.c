#include<stdio.h>
int main(){
	int a;
	int *p;
	p=&a;
	//int* p=&a;
	a=10;
	printf("%d\n", p);
	printf("%d\n", *p);
	*p=5;
	printf("%d\n", *p);
	int b=15;
	*p=b;
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", sizeof(int));
	printf("%d\n", p+1);
	printf("%d\n", *(p+1));
	
	return 0;
}