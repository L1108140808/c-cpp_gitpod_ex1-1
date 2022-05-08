#include<stdio.h>
int main () {
    float r = 0;
    printf("输入半径");
    scanf("%f", &r);
    printf("面积=%g\n", r*r*3.14);
    printf("周长=%g", r*2*3.14);

}
