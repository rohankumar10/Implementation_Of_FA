#include<stdio.h>
#include<string.h> // For strlen() function
int main()
{
int i;
int TT[3][2]={ // Row=State  Column=Alphabet  TT=TransactionTable
{0,1},
{2,0},
{0,1}
};
int InitialState,FinalState,CurrentState;
InitialState=0;
FinalState=2;
CurrentState=InitialState;
char w[100]="10001010"; // Input String
i=0; // Counter
	
	while(i<strlen(w))
	{	
	printf("%d",CurrentState);
	CurrentState=TT[CurrentState][(w[i]-'0')];
	printf("CurrentState: %d, SymbolToPrint: %d, Transactions: %d\n",
	CurrentState, w[i]-'0',i+1);	
	i++;
	}
		if(CurrentState==FinalState)
		{
		printf("%s Accepted",w);
		}
			else
			{
			printf("%s is Rejected",w);
			}
return 0;
}
