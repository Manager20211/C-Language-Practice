#include <stdio.h>

int main(void){

    int bridge = 0;
    int arr[] = {5,2,9,1,5,6};
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i  = 0; i < len-1;i++){

        for(int j = 0; j<len-1;j++){

            if(arr[j]>=arr[j+1]){

                bridge = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = bridge;

            }

        }

    }

    for(int k = 0; k<= len-1;k++){

        printf("%d   ", arr[k]);

    }

    return 0;

}