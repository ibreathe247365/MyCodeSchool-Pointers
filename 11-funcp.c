#include<stdio.h>
int Add(int a,int b){
	return a+b;
}
int main(){
	/*pointer to function that should take
	(int,int) as argument/parameter and return int
	*/
	int (*p)(int,int);
	p=&Add;//or p=Add;
	int c=(*p)(2,3);
	//or int c=p(2,3);
	printf("%d\n", c);
}