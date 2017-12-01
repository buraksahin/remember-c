/*
*
*		Given a prime number as input by the user, display the next prime number.
*
*		input n=2;
*		outpu: a=3;
*
*/

#include <stdio.h>

int isPrime(int number);

int main(){
	int number;
	printf("Enter n:");
	scanf("%d",&number);

	do{
		number++;
	}while(!isPrime(number));
	
	printf("Next prime number is: %d\n", number);
	return 0;
}

int isPrime(int number){
	int i,n,flag=0;
	n = number;
	for(i=2; i<=n/2; ++i){
		if (n%i==0){
			flag=1;
			break;
		}
	}
	if (flag==0){return 1;} // prime
	else{return 0;} // not prime
}
