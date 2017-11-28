/**
input=5;
output:
x 1
x * 2
x * * 3
x * * * 4
x * * * * 5
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
			printf("x");
			for(j=number; j>number-i; j--){
				printf(" *");
			}
			printf(" %d\n",i);
		}
	}
}
