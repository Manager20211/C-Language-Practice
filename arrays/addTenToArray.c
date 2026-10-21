/*

练习文件名：ex3AddTenToArray.c

要求：
写一个函数 addTenToArray，接收一个整型数组和数组长度，把数组里所有的元素都加上 10。
在 main 里定义一个数组 {1, 2, 3}，调用该函数，然后遍历打印数组，观察是否修改成功。

*/

#include <stdio.h>

void addTenToArray(int arr1[], int len){

    for(int i = 0; i<= len-1; i++){

        arr1[i] += 10;

    }

}

int main(void){

    int realArray[3] = {1,2,3};
    int realLen = sizeof(realArray) / sizeof(realArray[0]);

    addTenToArray(realArray,realLen);

    for(int j = 0; j<=realLen-1; j++){

        printf("%d    ", realArray[j]);

    }

    return 0;

}

/*

运行结果：
11    12    13

*/