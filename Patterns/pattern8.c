/**
input=4;
output:
4
4 3
4 3 2
4 3 2 1
*/

#include <stdio.h>

int main(){
	// variables
	int i,j;
	int number=1;
	while(number!=0){
		printf("Enter a number: ");
		scanf("%d", &number);
		// Loop
		for(i=1; i<=number; i++){
			for(j=number; j>number-i; j--){
				printf("%d ",j);
			}
			printf("\n");
		}
	}
}
