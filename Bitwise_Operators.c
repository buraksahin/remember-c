/* Bitwise Operators */

#include <stdio.h>

int main(){
    unsigned int a = 5, b = 9;  // a = 4(00000101), b = 8(00001001)
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a&b);  // AND result is 00000001
    printf("a|b = %d\n", a|b);  // OR result is 00001101
    printf("a^b = %d\n", a^b);  // XOR result is 00001100
    printf ("3^4 = %d\n", 3^4); // XOR (00000010) ^ (00000101) result is (00000111)
    printf("~a = %d\n", a=~a);  // NOT result is 11111010
    printf("b<<1 = %d\n", b<<1);  // Left Shift result is 00010010
    printf("b>>1 = %d\n", b>>1);  // Right Shift result is 00000100

    return 0;
}
