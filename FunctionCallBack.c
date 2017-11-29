/* Function Callback */

#include <stdio.h>

void FirstFunction(){
  printf("FirstFunction..\n");
}

void SecondFunction(void (*ptr)()){
  printf("SecondFunction..\n");
  (*ptr) (); // callback FirstFunction
}

int main(){
  
  void (*ptr)() = &FirstFunction; // Function pointer
  SecondFunction(ptr);

  return 0;
}
