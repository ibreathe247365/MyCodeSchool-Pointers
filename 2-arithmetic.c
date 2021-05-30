#include<stdio.h>

int main(){
	int a=1025;
	int* p;
	p=&a;
	printf("%d %d\n", p,*p);
	printf("%d %d\n", p+1,*p+1);
	char* p0;
	p0=(char*)p;//typecasting
	printf("%d %d\n", p0,*(p0));
	printf("%d %d\n", p0+1,*(p0+1));
	//1025=00000000 00000000 00000100 00000001
}