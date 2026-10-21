/*

练习文件名：ex4PrintArray.c
要求：接收一个数组和长度，打印成 [1, 2, 3] 这种格式。（注意逗号和空格的控制，最后一个数字后面不要逗号）。

*/

#include <stdio.h>

int main(void){

    
    int len;

    printf("请输入目标数组长度:");
    scanf("%d", &len);

    int arr1[len];

    for(int i=0; i<= len-1; i++){

        scanf("%d", &arr1[i]);

    }

    printf("[");
    printf("%d,", arr1[0]);

    for(int j = 1; j<= len -2; j++){

        printf(" %d,", arr1[j]);

    }

    printf(" %d", arr1[len-1]);
    printf("]");

    return 0;

}