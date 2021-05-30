#include<stdio.h>

int main(){
	int B[2][3]={{2,3,6},{4,5,8}};
	//B[0] is  a 1D array of 3 integers.
	int (*P)[3]=B;//*P=B will give compilation error.
	//B or &B[0].
	//*B or B[0] or &B[0][0]
	printf("%d\n", B);
	printf("%d\n", B+1);//&B[1]
	printf("%d\n", *(B+1));//&B[1]-pointer to 1st integer in B[1].
	printf("%d\n", *(B+1)+2);//B[1]+2 or &B[1][2]-next to next integer
	printf("%d\n", *(*B+1));//B[0][1]
	//B[i][j]=*(B[i]+j)=*(*(B+i)+j)


	int C[3][2][2]={{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}} ;
	int (*p)[2][2]=C;
	printf("%d\n", C);//int (*) [2][2]
	printf("%d\n", *C);//or C[0] or &C[0][0]
	//C[i][j][k]=*(C[i][j]+k)=*(*(C[i]+j)+K)=*(*(*(C+i)+j)+k)
	printf("%d %d %d %d\n", C,*C,C[0],&C[0][0]);
	printf("%d\n", *(C[0][0]+1));
	return 0;
}