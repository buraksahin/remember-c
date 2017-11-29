/**
input=5
output:
* * * * *
*       *
*       *
*       *
* * * * *
*/

#include <stdio.h>

int main(void){
  int rc;
  printf("Enter a number:");
  scanf("%d",&rc);

  for(int i=0; i < rc; i++){
    for(int j=0; j < rc; j++){
      if (i == 0 || i == rc - 1){
        printf("*");
      }
      else if(j == 0 || j == rc -1){
        printf("*");
      }
      else{
        printf(" ");
      }
      printf(" ");
    }
    printf("\n");
  }

  return 0;
}
