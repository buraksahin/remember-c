/*
*  Pointers:
*    (*) Unary operator '&' (Ampersand) that returns the address
*    (*) Unary '*' (Astrik) declare a pointer variable or
*    ||                     returns the value of the variable located at the address
*/

#include <stdio.h>

/* Color Definations */
#define RED   "\033[01;31m"
#define GREEN "\033[01;32m"
#define BROWN  "\033[22;33m"
#define BLUE  "\033[01;34m"
#define MERGE(a,b) a##b // Merge a and b
#define CPRINT_RED(X)   printf(RED "%s",X);
#define CPRINT_BLUE(X) printf(BLUE "%s",X);
#define CPRINT_GREEN(X,Y) printf(GREEN"%s %d\n",X,(int)Y);
#define CPRINT_LINE(X) printf(BROWN "%s",X);

void LinePrint(int a){
  printf("\n");
  for(a; a>0; a--){
    CPRINT_LINE("---");
  }
    printf("\n");
}

void add(int a, int b){
  CPRINT_GREEN("(>) Addition is:", a+b);
}

void subtract(int a, int b){
  CPRINT_GREEN("(>) Subtraction is:", a-b);
}

void multiply(int a, int b){
  CPRINT_GREEN("(>) Multiplication is:", a*b);
}

int main(){
  void (*f_ptr)(int) = &LinePrint; // Declare a function pointer assigned to function1 address

  /* Function Array keeping multiple functions */
  void (*function_array[])(int, int) = {add, subtract, multiply};
  int a, b, c=1;
  while(1){
    (*f_ptr)(12);
    CPRINT_RED("(<) Enter Choice: \n |(0) Add\n |(1) Subtract\n |(2) Multiply");
    (*f_ptr)(12);
    CPRINT_RED("");
    scanf("%d", &c);
    if(c>2 || c<0){return 0;}
    CPRINT_BLUE("(<) Enter first number: ");
    scanf("%d", &a);
    CPRINT_BLUE("(<) Enter second number: ");
    scanf("%d", &b);
    CPRINT_LINE("------------------------------------\n");
    (*function_array[c])(a, b); // Call #c function in the function array
    CPRINT_LINE("------------------------------------\n");
  }

  return 0;
}
