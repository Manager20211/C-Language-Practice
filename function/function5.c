/*

#include <stdio.h>

int main(void) {
    int result = add(3, 5);
    printf("%d\n", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}

*/

#include <stdio.h>

int add(int a, int b);

int main(void){

    int result = add(3,5);
    printf("%d\n", result);

    return 0;

}

int add(int a, int b){

    return a+b;

}