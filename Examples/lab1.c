#include <stdio.h>

int cube(int x);
int term(int x);
int f(int a, int b, int c);

int main(){
	int x = 2;
	int y = 1;
	printf("%d",f(x,y,2));
	return 0;
}

int cube(int x){
	return x*x*x;
}

int term(int x){
	return cube(x)-4*x+5;
}

int f(int a, int b, int c){
	return (cube(term(a)) - 4 * term(a) - cube(b))/c;
}
