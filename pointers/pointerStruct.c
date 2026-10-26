/*

#include <stdio.h>

struct Student {
    int id;
};

int main(void) {
    struct Student s1;
    s1.id = 100;

    // 这行代码，你现在能看懂了吗？
    struct Student *p = &s1;

    // 我们怎么通过 p 找到 100 这个值？
    // 我们用最笨的办法：*p 就是顺着地址把 s1 拿回来，然后再用 . 访问
    printf("取出的 id 是: %d\n", (*p).id);

    return 0;
}


*/


#include <stdio.h>

struct Student{

    int id;
    
};

int main(void){

    struct Student s1;
    s1.id = 100;

    struct Student *p = &s1;

    printf("%d\n", (*p).id);

    return 0;

}