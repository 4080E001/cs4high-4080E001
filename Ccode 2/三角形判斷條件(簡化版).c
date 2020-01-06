#include <stdio.h>
int main(){
    int side1,side2,side3,side0;
    printf("please enter the lengths:");
    scanf("%d%d%d", &side1, &side2, &side3);
    if(side2<side1){                   //大小排列
        side0=side2;side2=side1;side1=side0;
        }
    if(side3<side1){
        side0=side3;side3=side1;side1=side0;
        }
    if(side3<side2){
        side0=side3;side3=side2;side2=side0;
        }
    if(side1==side3){
        printf("regular triangle\n");//正三角形
    }
    if(side1==side2||side2==side3){
        printf("isosceles triangle\n");//等腰三角形
    }
    if(side1*side1+side2*side2==side3*side3){
        printf("rectangular triangle\n");//直角三角形
    }
    return 0;

}
