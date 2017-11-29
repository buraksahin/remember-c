/*
*  Pointers:
*    (*) Unary operator '&' (ampersand) that returns the address
*    (*) Unary '*' (Astrik) declare a pointer variable
*        || returns the value of the variable located at the address
*/

#include <stdio.h>

int main(){
  int value = 3;
  int *ptr; // Pointer declaration
  ptr = &value; // Value address assigned to ptr
  printf("address of value: %d\n",ptr);
  printf("address of value: %d\n",&value);
  printf("value: %d\n",*ptr);
  printf("address of ptr: %d\n",&ptr);

  int arr[] = {1, 22, 333, 4444}; // Array Defination
  printf("Length of Array: %d\n", sizeof(arr)/sizeof(arr[0])); // Print Array Length

  /* Precedence of postfix and prefix */
  int a = 10;
  printf("\n\n\nPrecedence of postfix and prefix: %d %d %d\n", a, a++, ++a); // 12 11 12

  /* Pointers with Array */
  int pp_var[] = {10, 20, 30};
  int *pv = &pp_var;
  ++*pv;    // Increase: pp_var[0] 11
  (*pv)++;  // Increase: pp_var[0] 12
  *pv++;    // Set Next: pp_var[1] 20
  *++pv;    // Set Next: pp_var[2] 30
  ++(*pv);  // Increase: pp_var[2] 31
  printf("pp_var[0] = %d, pp_var[1] = %d, *pv = %d\n", pp_var[0], pp_var[1], *pv);
  printf("pv address: %d\n",&pv);
  printf("Value: %d\n",*pv);
  *pv++;    // Set Next Variable
  *pv++;    // Set Next Variable
  *pv++;    // Set Next Variable
  printf("arr[2] address: %d\n",pv);
  printf("pv address: %d\n",&pv);
  printf("arr[2] address: %d\n",&arr[2]);
  printf("Value: %d\n\n\n",*pv);

  int povar = 207;
  int *dp1;
  int **dp2;
  dp1 = &povar;
  dp2 = &dp1;
  printf("double pointer: %d\n",*dp1);
  printf("double pointer: %d\n", **dp2);

  return 0;
}
