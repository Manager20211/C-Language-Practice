/*

练习任务 (ex2FileRead.c)
要求自己写出下面的逻辑（纯独立拼装）：

声明文件指针 FILE *fp;

用 fopen 以只读模式 "r" 打开刚才的 "student.txt"。

安全检查：如果 fp == NULL（比如文件不存在），打印“找不到文件”，并 return 1;。

定义一个字符数组 char line[100]; 用来装读到的文字。

重点：用 while (fgets(line, 100, fp) != NULL) 循环。这句话的意思是：“只要还能从文件里读到东西，就一直读”。

在循环内部，用 printf("%s", line); 把读到的内容打印到屏幕上。

最后 fclose(fp);。

（提示：fgets 读取时，如果文件里有换行，它会把换行符 \n 也读进 line 里，所以直接用 %s 打印即可，不需要额外加 \n。）

写好后编译运行，看看屏幕上是不是把你刚才写在文件里的字原封不动地打出来了。发我

*/

#include <stdio.h>

int main(void){

    FILE *fp;

    fp = fopen("student.txt", "r");

    if(fp == NULL){

        printf("文件打开失败\n");

        return 1;

    }

    char line[100];

    while(fgets(line,100,fp) != NULL){

        printf("%s", line);

    }

    fclose(fp);

    return 0;

}

/*

运行成功

*/