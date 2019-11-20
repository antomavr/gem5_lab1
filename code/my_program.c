//Antonios Mavromanolis
//A.M. 9010
//This is my program example in C for the fisrt lab



#include <stdio.h>

int main()
{
	int i,j;
	int	A[100];
	int B[100];
	for(i=0;i<100;i++)
	{
		A[i]=i;
		A[i]=A[i]*A[i];
		printf("%d\n",A[i]);
	}
	printf("\n#------------------------------------------------------------#\n\n");
	for(i=0;i<100;i++)
	{
		B[i]=i;
		B[i]=B[i]*B[i]*B[i];
		printf("%d\n",B[i]);
	}
	
	printf("Finish.\n");
}
