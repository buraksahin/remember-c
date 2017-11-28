/**
input=5
output:
		*
	 ***
	*****
 *******
*********
*/

#include <stdio.h>

int star(int x);
int space(int x, int y);

int main(){
	int number, row, yildiz, bosluk;
	printf("Enter row number: ");
	scanf("%d",&number);

	for(row=0;row<number;row++){
		yildiz = star(row);
		bosluk = space(number,yildiz);
		for(; bosluk>0; bosluk--){
			printf(" ");
		}
		for(; yildiz>0; yildiz--){
			printf("*");
		}
			printf("\n");
	}
}

int star(int x){
	return 2*x+1;
}

int space(int x, int y){
	return (2*x-1-y)/2;
}
