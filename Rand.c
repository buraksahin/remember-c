#include <stdio.h>
#include <stdlib.h>

int main(void){
  srand(time(0));
  for(int i = 0; i<3; i++){
    printf(" %d ", rand());
  }

  return 0;
}
