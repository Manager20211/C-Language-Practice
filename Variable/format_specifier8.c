/*

练习 8 要求：

声明下面所有变量并初始化，用正确格式符输出：

int

unsigned int

long

unsigned long

long long

unsigned long long

short

unsigned short

char

size_t

每个变量一行，格式：

text
int: 10
unsigned int: 20
long: 30
...

*/

#include <stdio.h>

int main(void){

    int intTest = 10;
    unsigned unsignedIntTest = 20u;

    long longTest = 30l;
    unsigned long unsignedLongTest = 40ul;

    long long longLongTest = 50ll;
    unsigned long long unsignedLongLongTest = 60ull;

    short shortTest = 70;
    unsigned short unsignedShortTest= 80;

    char charTest = 'A';

    size_t sizeTTest = sizeof (int);

    printf("int:%d\n", intTest);
    printf("unsigned int:%u\n", unsignedIntTest);
    printf("long:%ld\n", longTest);
    printf("unsigned long:%lu\n", unsignedLongTest);
    printf("longlong:%lld\n", longLongTest);
    printf("unsigned long long:%llu\n", unsignedLongLongTest);
    printf("short:%hd\n", shortTest);
    printf("unsigned short:%hu\n", unsignedShortTest);
    printf("char:%c\n", charTest); //输出字符本身
    printf("ASCII of char:%hhd\n", charTest);
    printf("size_t:%zu\n", sizeTTest);

    return 0;



}

/*

运行结果
int:10                                                                                                                                                                    
unsigned int:20                                                                                                                                                           
long:30                                                                                                                                                                   
unsigned long:40                                                                                                                                                          
longlong:50                                                                                                                                                               
unsigned long long:60                                                                                                                                                     
short:70                                                                                                                                                                  
unsigned short:80                                                                                                                                                         
char:A                                                                                                                                                                    
ASCII of char:65                                                                                                                                                          
size_t:4 

*/