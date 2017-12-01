/*
*
*		Given a number as input by the user, find and display the prime numbers that divide the
*		input properly and the sum of the exponents of those prime numbers that will be needed to obtain
*		the original number
*
*		input number = 40;
*		outpu: Prime numbers 2^3 5^1
*
*/

#include <stdio.h>

int isPrime(int number);

int main(void){
	int number, DoV=2, SoE=0, EoV = 0; // DoV: Divisor of Value SoE: Some of Exponents EoV: Exponent of Value
	printf("\033[01;34mEnter n:\033[01;32m ");
	scanf("%d",&number);
	printf("\033[01;34mPrime Numbers: ");
	int keepVal = 0;
	while(number>1){
		if(number%DoV==0 && isPrime(DoV)){
			keepVal = DoV;
			number = number / DoV;
			EoV++;
			SoE++;
		}
		else{
			if(number*DoV%DoV==0 && keepVal == DoV){
				printf("\033[01;32m%d^%d ", DoV, EoV);
			}
			EoV = 0;
			DoV++;
		}
	}
	printf("%d^%d ", DoV, EoV);
	printf("\n\033[01;34mSum of exponents:\033[01;32m %d\n", SoE);
	return 0;
}

int isPrime(int number){
	int i=2, n=number, flag=0;

	while(i<=n/2){
		if (n%i==0){
			flag=1;
			break;
		}
		i++;
	}

	if (flag==0){return 1;} // 1: prime
	else{return 0;} // 0: not prime
}
