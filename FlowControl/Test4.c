/*

测试题 4：找素数 (考察嵌套循环 + break)
要求：
找出 100 到 200 之间所有的素数，并每行打印 5 个。
提示：

外层 for 循环遍历 100 到 200。

内层 for 循环判断是否为素数（之前做过），如果是素数，打印并统计数量。

统计数量每满 5 个，就换行。

*/
/*
#include <stdio.h>

int main(void){

    int i;
    int count = 0;
    int numbersCount = 0;

    for(i = 100; i <= 200; i++){

        for(int j = 2; j <= i-1;j++){

            if(i % j != 0){

                count++;

            }else{



            }

            


            if(count == i-2){

                if(numbersCount == 5){

                    printf("\n");
                    numbersCount = 0;

                }else{



                }

                printf("  %d  ", i);
                numbersCount++;

            }

            if(j == i-1){

                count = 0;

            }

        }

    }

    return 0;

}

*/

#include <stdio.h>

int main(void){

    int i,j;
    int numbersCount = 0;

    for(i = 100; i<=200; i++){

        for(j = 2; j<=i-1; j++){

            if(i % j ==0){

                break;

            }

        }

        if(i==j){

            printf("%4d", i);
            numbersCount++;

        }

        if(numbersCount == 5){

            printf("\n");
            numbersCount = 0;

        }

    }

    return 0;

}

/*

运行结果:
101    103    107    109    113                                                                                                                                  
127    131    137    139    149                                                                                                                                  
151    157    163    167    173                                                                                                                                  
179    181    191    193    197                                                                                                                                  
199

想了好久才写出来的，算法也还没优化过，我知道很烦

*/