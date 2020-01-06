#include <stdio.h>
int main(){
    double weight,height;
    double bmi;
    printf("please enter the weight: ");
    scanf("%lf",&weight);
    printf("please enter the height: ");
    scanf("%lf",&height);
    height /= 100;
    bmi=weight/(height *= height);
    if (bmi<18.5){
        printf("to light\n");
    } else if (bmi>24){
        printf("too heavy\n");
        }else{
            printf("Normal weight\n");
        }
        printf("bmi: %f",bmi);
    return 0;
}
