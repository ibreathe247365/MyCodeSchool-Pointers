#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash=100;

void Play(int bet){
	// char C[3]={'J','Q','K'};
	char *C=(char*)malloc(3*sizeof(char));//c++ -> char *C= new char[3];
	C[0]='J';C[1]='Q';C[2]='K';
	printf("Shuffling ...\n");
	srand(time(NULL)); //seeding random number generator.
	int i;
	for (int i = 0; i < 5; ++i)
	{
		int x=rand()%3;
		int y=rand()%3;
		int temp=C[x];
		C[x]=C[y];
		C[y]=temp;
	}
	int playerguess;
	printf("What 's the position of queen-1,2 or 3?\n");
	scanf("%d",&playerguess);
	if (C[playerguess-1]=='Q')
	{
		cash += 3*bet;
		printf("You Win! Cash=\n"cash);
	}
	else
	{
		cash -= bet;
		printf("You Lose! Cash=\n"cash);
	}
	free(C);
}

int main(){
	int bet;
	printf("Welcome to Virtual Casino!!\n");
	printf("Starting Cash = $%d\n", cash);
	while(cash>0){
		printf("What is Your Bet? $");
		scanf("%d",&bet);
		if (bet==0||bet>cash)
		{
			break;
		}
		Play(bet);
		printf("\n************************************************\n");
	}
	return 0;
}