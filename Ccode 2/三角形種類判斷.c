#include <stdio.h>
int main(){
    int side1,side2,side3;
    printf("please enter the lengths:");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1==side2&&side2==side3){
        printf("regular triangle\n");//正三角形
    }
    if (side1==side2||side2==side3||side1==side3){
        printf("isosceles triangle\n");//等腰三角形
    }
    if (side1*side1+side2*side2==side3*side3||
        side1*side1+side3*side3==side2*side2||
        side2*side2+side3*side3==side1*side1){
    printf("rectangular triangle\n");//直角三角形
    }
    return 0;
}
