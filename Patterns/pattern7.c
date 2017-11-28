/**
input=2;
output:
2 1
1 2

input=4;
output:
4 3 2 1
1 4 3 2
2 1 4 3
3 2 1 4
*/

#include <stdio.h>

void ncube(int number);

int main(){
	int number=1;
	while(number!=0){
		printf("Enter a number for NxN matrix: ");
		scanf("%d", &number);
		ncube(number);
	}
}

void ncube(int number){
	int row, col;
	for(row=0; row<number;row++){
			for(col=row; col>0; col--){
				printf("%d ",col);
			}
			for(col=number; col>row ; col--){
				printf("%d ",col);
			}
			printf("\n");
		}
}
