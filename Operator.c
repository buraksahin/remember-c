/* Operators */
#include <stdio.h>

int main(){
	int x = 10;
	int y = (x++, printf("x = %d\n", x), ++x, printf("x = %d\n", x), ++x,++x);
	printf("x: %d - y: %d", x, y); // x: 14 - y: 14
	x = 5;
	y = (x++, ++x); // Output: y = 7
	x = 5;
	int v = (x++, x++); // Output: v = 6
	printf("\nx: %d - v: %d - y: %d", x, v, y);
	printf("\nPreincrement v: %d", ++v); // Preincrement then print 7
	printf("\nIncrement v: %d\n", v++);
	printf("v: %d",v); // Output: p = 8

	return 0;
}
