/*
*  Pointers:
*    (*) Unary operator '&' (ampersand) that returns the address
*    (*) Unary '*' (Astrik) declare a pointer variable
*        || returns the value of the variable located at the address
*/

#include <stdio.h>

int add(int a, int b){
  return a+b;
}

int sub(int a, int b){
  return a-b;
}

/*  Function as parameter
*   function(int,int), int, int -> int
*   wrapper: takes function and integers and call the function with a and b argumans
*/
int wrapper(int (*fpointer)(int,int), int a,int b){
  fpointer(a, b);  /*  add or sub functions return an integer value
                    *  because of that no need to write again return for wrapper
                    */
}

int main(){
  printf("\033[22;31m Add:%d\n", wrapper(add,5,6)); // 033[22;32m Red Color
  printf("\033[22;32m Sub:%d\n", wrapper(sub,5,6)); // 033[22;32m Green Color

  return 0;
}
