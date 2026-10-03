#include <stdio.h>

int main(void){

    printf("The size of char is %zu\n", sizeof (char));
    printf("The size of int is %zu\n", sizeof (int));
    printf("The size of short is %zu\n", sizeof (short));
    printf("The size of long is %zu\n", sizeof (long));
    printf("The size of long long is %zu\n", sizeof (long long));

    printf("The size of unsigned char is %zu\n", sizeof (unsigned char));
    printf("The size of unsigned int is %zu\n", sizeof (unsigned int));
    printf("The size of unsigned short is %zu\n", sizeof (unsigned short));
    printf("The size of unsigned long is %zu\n", sizeof (unsigned long));
    printf("The size of unsigned long long is %zu\n", sizeof (unsigned long long));
    return 0;

}