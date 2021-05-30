#include<stdio.h>
void printhello(char* name)
{
	printf("Hello %s\n", name);
}
int main(){
	void (*ptr)(char*);
	ptr=printhello;
	ptr("Tom");
}