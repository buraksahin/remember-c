/**
input=2
output:
    2
  2 1
2 1 0
  2 1
    2
*/

#include <stdio.h>

int main()
{
	// variables
	int i,j,tnum,space,row,col,pnumber;
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	row = 2*number+1;
	col = number+1;

	// Main Loop
	for(i=1; i<=row; i++){
		if(i>col){
			space = i-col;
			pnumber = col-space;
		}
		else {
			space = col-i;  // for first line ex: (i=1 col=4 space=3)
			pnumber = i; 		// print number as much as i
		}
		// Print Loops
		for(j=space; j>0; j--){
			printf("  ");
		}
		for(j=pnumber, tnum=number; j>0; j--, tnum--){
			printf("%d ",tnum);
		}
		printf("\n");
	}
	return 0;
}
