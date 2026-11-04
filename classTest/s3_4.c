#include <stdio.h>
#include <math.h>

int main(void){

    float a,b,c,d,x1,x2,q1,q2;
    scanf("%f,%f,%f", &a,&b,&c);

    d = b*b-4*a*c;

    if(d>=0){

        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("x1=%6.2f,x2=%6.2f\n", x1,x2);

    }
    else{

        q1 = -b/(2*a);
        q2 = sqrt(fabs(d)) / (2*a);
        printf("x1=%6.2f+%6.2fi\n",q1,q2);
        printf("x2=%6.2f-%6.2fi\n",q1,q2);

    }

    return 0;

}