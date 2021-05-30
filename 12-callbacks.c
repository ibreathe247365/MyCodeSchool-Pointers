#include <stdio.h>
void A(){
	printf("Hello");
}
void B(void (*ptr)())//function pointer as argument
{
	ptr();
}
int main(){
	void (*p)()=A;
	B(p);
}