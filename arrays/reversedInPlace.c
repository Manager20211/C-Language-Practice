/*

练习 1 (ex1ReverseInPlace.c)
真正的数组逆序。
之前只是“倒着打印”，现在要求把数组里的元素实际位置反转。
例如：原数组是 {1, 2, 3, 4, 5}，经过你的代码处理后，数组本身变成 {5, 4, 3, 2, 1}，再遍历打印出来。

*/

#include <stdio.h>

int main(void){

    int len;

    printf("请输入目标数组长度:");
    scanf("%d", &len);

    int arr[len];

    for(int i = 0; i<=len-1; i++){

        scanf("%d", &arr[i]);

    }


    for(int j = 0; j<= len / 2 -1; j++){

        int bridge = arr[j];
        
        arr[j] = arr[len-1-j];

        arr[len-1-j] = bridge;
    

    }

    
    for(int k =0; k<=len-1;k++){

        printf("%d    ", arr[k]);

    }

    return 0;
    

}