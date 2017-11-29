/* Memory */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *ptr = (int*)malloc(sizeof(int)); // Allocate memory
    int *var = (int*)malloc(sizeof(int));
    *ptr = 20;
    *var = 30;
    ptr = (int *)calloc(10,sizeof(int));
    free(var); // set free
    printf("ptr: %d var: %d\n", *ptr, *var);
    *var = 40;
    printf("ptr: %d var: %d", *ptr, *var);

    return 0;
}
