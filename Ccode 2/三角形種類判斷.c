#include <stdio.h>
int main(){
    int side1,side2,side3;
    printf("please enter the lengths:");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1==side2&&side2==side3){
        printf("regular triangle\n");//���T����
    }
    if (side1==side2||side2==side3||side1==side3){
        printf("isosceles triangle\n");//���y�T����
    }
    if (side1*side1+side2*side2==side3*side3||
        side1*side1+side3*side3==side2*side2||
        side2*side2+side3*side3==side1*side1){
    printf("rectangular triangle\n");//�����T����
    }
    return 0;
}
