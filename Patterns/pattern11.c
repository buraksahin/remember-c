/**
Input:5
Output:
55555
4444
333
22
1
*/

#include <stdio.h>

int main(){
	int number=1;
	printf("Enter a number: ");
	scanf("%d", &number);
	do{
		int x=number;
		do{
			printf("%d", number);
			x--;
		}while(x>0);
		printf("\n");
		number--;
	}while(number>0);
}
