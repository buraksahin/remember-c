/**
input=4;
output:
D
D C
D C B
D C B A
*/

#include <stdio.h>

int main(){
	// variables
	int i,j;
	char c;
	int number=1;
	while(number!=0){
		printf("Enter a number: ");
		scanf("%d", &number);
		// Loop
		for(i=1; i<=number; i++){
			for(j=number; j>number-i; j--){
				c='A'+j-1;
				printf("%c ",c);
			}
			printf("\n");
		}
	}
}
