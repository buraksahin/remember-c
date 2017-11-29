#include<stdio.h>
#include <stdlib.h>

/* Global Variable */
int p = 10;

/*  Function declarations
*   if function is not declared so c compiler assumes the function as integer.
*   Because of that needs to declare other types to prevent some errors.
*/
void Fconstructor (void) __attribute__ ((constructor));
void Fdestructor (void) __attribute__ ((destructor));

/* Constructor */
void Fconstructor (void){
    p = 5;
    printf ("Constructor..\n");
}

/* Destructor */
void Fdestructor (void){
    printf ("Destructor..\n");
}

/* Main */
int main(void){
    printf ("Return Value: %i\n",getNumber());
    printf ("P is %i",p);
    foo();
    bar();

    /* Nested Function Test */
    auto int nestedfunction();
    nestedfunction();
    int nestedfunction(){
        printf("Nested Function..\n");
        return 1;
    }

    return 0;
}

/* _Noreturn Function: cannot return value */
_Noreturn void getNumber(){
  return 10;
}

void foo(void){
  printf("%s",__func__);
}

void bar(void){
  printf("%s",__func__);
}
