#include <stdio.h>

int square(int x);
int nom(int x);
int denom(int x);
int f(int x, int y);

int main(){
	int x,y;
	printf("Enter two numbers:");
	scanf("%d %d",&x,&y);
	printf("%d",f(x,y));
	return 0;
}

int square(int x){
	return x*x;
}

int nom(int x){
	return 2*square(x)+5;
}

int denom(int x){
	return x-3;
}

int f(int x, int y){
	return nom(x)/denom(y);
}
