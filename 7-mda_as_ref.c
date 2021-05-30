#include<stdio.h>
void Func(int A[][2][2])//or (*A)[2][2] 2d array of integers
{

}
int main()
{
	int C[3][2][2]={{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
	int A[2]={1,2};
	int B[2][3]={{2,4,6},{5,7,8}}//B returns int (*)[3]
	Func(A);
	return 0;
}