
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printARR (int N, int ARR[N][N]);

int main(void){
	printf("Please enter a value: ");
	int N;
	scanf("%d",&N);
	while(N%4!=0){
		N++;
	}
	int A[N][N];
	srand(time(0));
	int i, j;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			A[i][j] = rand()%100;
		}
	}

	int B[N/2][N/2]; // Create new array B for subarray of A
	int r, c, blen = N/2;
	int ar=1, ac=1;
	for(r=0; r<blen; r++){
		for(c=0; c<blen; c++){
			B[r][c] = A[ar][ac];
			ac = ac + 2;
		}
		ac = 1;
		ar = ar + 2;
	}
	printARR(N,A);
	printf("\n\n\n");
	printARR(blen,B);
}

void printARR (int N, int ARR[N][N]){
	int i,j;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("%d  ", ARR[i][j]);
		}
		printf("\n");
	}
}
