
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f(int s1, int s2, int a[s1][s2]);

int main(){
	int number;
	printf("Enter number for NXN Matrix:");
	scanf("%d",&number);
	if(number>100){
		printf("Error: Matrix size!\n");
		exit(0);
	}
	else{
		int A[number][number];
		f(number,number,A);
	}
	return 0;
}

void f(int s1, int s2, int a[s1][s2]){
	srand(time(0));
	for(int row=0; row<s1; row++){
		for(int col=0; col<s2; col++){
			a[row][col] = rand()%100;
			printf("%d  ", a[row][col]);
		}
		printf("\n\n");
	}

	printf("\n\n\n\n");

	for(int row=0; row<s1; row++){
		int col;
		for(col=0; col<row; col++){
			printf("%d  ", a[row][col]);
		}
		for(int rr=row; rr>=0; rr--){
			printf("%d  ", a[rr][col]);
		}
		printf("\n\n");
	}
}
