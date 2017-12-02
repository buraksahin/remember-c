
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INPUTSIZE 8 // Max input value
void Sort (int *Arr[], int LoA);
void PrintList(int A[INPUTSIZE], int indexofA, int *B[], int indexofB, int *C[], int indexofC);

int main(void){
	/* Variables */
	int , value;
	int A[INPUTSIZE];
	int *B[INPUTSIZE];
	int *C[INPUTSIZE];
	int indexofA = 0;
	int indexofB = 0;
	int indexofC = 0;

	while(indexofA<INPUTSIZE){
		printf("\nEnter 1 for B  || Enter 2 for C: ");
		scanf("%d", &entrylist);
		if(entrylist == 1){
			printf("List B < ENTER a value: ");
			scanf("%d", &value);
			A[indexofA] = value;
			B[indexofB] = &A[indexofA];
			indexofB++;
			Sort(B, indexofB);
			PrintList(&A,indexofA, B, indexofB, C, indexofC);
			indexofA++;
		}
		else if(entrylist == 2){
			printf("List C < ENTER a value: ");
			scanf("%d", &value);
			A[indexofA] = value;
			C[indexofC] = &A[indexofA];
			indexofC++;
			Sort(C, indexofC);
			PrintList(&A,indexofA, B, indexofB, C, indexofC);
			indexofA++;
		}
		else{
			printf("Error: Incorrect entry!\n");
		}
	}// end of the while
	int i;
}

// Print variables and contents
void PrintList(int A[INPUTSIZE], int indexofA, int *B[], int indexofB, int *C[], int indexofC){
	printf("\n\n----- Input: %d -----", A[indexofA]);
	printf("----- B List: ");
	int i;
	for(i=1; i<=indexofB; i++){
		printf("%d ", *B[i-1]);
	}
	printf("----- C List: ");
	for(i=1; i<=indexofC; i++){
		printf("%d \n", *C[i-1]);
	}
}

// Insertion Sort
// int Arr:Array of Pointers, int LoA:Length of Array -> Void
void Sort(int *Arr[INPUTSIZE], int LoA){
	int j, i, *key;
	for(j=1; j<LoA; j++){
		key=Arr[j];
		i = j-1;
		while (i>=0 && *Arr[i]>*key){
			Arr[i+1] = Arr[i];
			i = i-1;
		}
		Arr[i+1] = key;
	}
}
