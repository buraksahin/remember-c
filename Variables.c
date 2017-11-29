#include <stdio.h>
#include <stdbool.h>

int glob_var = 10;        // Declaring and initializing a global variable
typedef long long int LL; // Type defination
const int const_var = 15; // Constant defination
static int stat_var = 20; // Define static variable
enum VARS { var = 25 };   // Enumeration

int main(void)
{
  /* Size of variables */
  printf("Size of Char: %d\n",sizeof(char));
  printf("Size of Int: %d\n",sizeof(int));
  printf("Size of Float: %d\n",sizeof(float));
  printf("Size of Double: %d\n", sizeof(double));

  int co_var;
  co_var = (1, 2, 3, 4, 5);
  printf("%d\n", co_var); // Output: 5

  register char reg_var = 'R';
  extern int glob_var;    // Declaring and initializing extern variable
  glob_var = 20;
  if(true){
    LL c = 5000; // Define LL variable
    LL sov = sizeof(LL);
    printf("Extern-Global: %d Size: %lld Enum: %d Reg-Variable: %c", glob_var, sov, var, reg_var);
  }

  return 0;
}
