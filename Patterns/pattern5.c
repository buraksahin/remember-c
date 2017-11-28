/**
input=5;
output:
D C B A
D C B A
D C B A
D C B A
*/

#include <stdio.h>

int main(){
	int i,j,space,number=1;
	char c;
	while(number!=0){
		printf("Enter a number: ");
		scanf("%d",&number);
		for(i=0; i<number; i++){
			for(j=number;j>0;j--){
				c='A'+j-1;
				printf("%c ",c);
			}
			printf("\n");
		}
	}
    return 0;
}
