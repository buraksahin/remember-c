/*
*
*		You will find the value a, which satisfies the following
*		equation using while loop, given the inputs x and n.
*
*		(*)	n^a + (x mod n) = x
*
*		input n=3 x=29;
*		outpu: a=3
*
*/

#include <stdio.h>

int main(){

	int n, x, p, a=0;
	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter x:");
	scanf("%d", &x);
	p = x-x%n;
	while(p>1){
		p = p/n;
		a++;
	}
	printf("%d\n", a);

	return 0;
}
