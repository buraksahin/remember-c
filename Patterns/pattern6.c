/**
input=5
output:
		5
	 444
	33333
 2222222
111111111
*/

#include <stdio.h>

int pnumber(int x);
int space(int x, int y);

int main(){
	int number, row, printed, spc;
	printf("Enter row number: ");
	scanf("%d",&number);

	for(row=0;row<number;row++){
		printed = pnumber(row);
		spc = space(number,printed);
		for(; spc>0; spc--){
			printf(" ");
		}
		for(; printed>0; printed--){
			printf("%d",number-row);
		}
			printf("\n");
	}
}

int pnumber(int x){
	return 2*x+1;
}

int space(int x, int y){
	return (2*x-1-y)/2;
}
