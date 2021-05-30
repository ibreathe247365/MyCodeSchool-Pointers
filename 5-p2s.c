/*A is same as &A[0].
int A[]in parameter list is same as int* A.
A[i] is same as *(A+i).
*/
#include <stdio.h>
void print(char* c){
	int i=0;
	while(C[i]!='\0')//C[i] same as *(C+i)
	{
		printf("%c\n", C[i++]);
	}
	printf("\n");
	while(*C!='\0')
	{
		printf("%c\n", *C);
		C++;
	}
	printf("\n");
}
int main(){
	char C[20]="Hello";
	print(C);
	return 0;
}