/* Preprocessors and Macros */

#include <stdio.h>

#define PI 3.14f
#define SQUARE(x) x*x
#define INCREMENT(x) ++x
#define MERGE(a, b) a##b
#define MERGE2(a) #a#a#a
#define PRINT(x, to) while(x<=to){printf("%d ",x); x+=x;}
#define concat(x, y) x##y
#define PRINT(num, str) {\
            printf("%d is", num);\
            printf(" %s number\n", str);\
           }

int main(){
	printf("%.2f", PI);
	printf("\n%d", SQUARE(5));
	printf("\n%d", SQUARE(MERGE(1, 5)));
	printf("\n%s\n", MERGE2(w));
	int x = 1;
  PRINT(x, 10);

	/* Some standard macros */
	printf("\nCurrent File :%s\n", __FILE__ );
	printf("Current Date :%s\n", __DATE__ );
	printf("Current Time :%s\n", __TIME__ );
	printf("Line Number :%d\n", __LINE__ );

  printf("PI: %f", concat(P,I));
	int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num & 1){
			PRINT(num, "Odd");
		}
    else{
			PRINT(num, "Even");
		}

	return 0;
}
