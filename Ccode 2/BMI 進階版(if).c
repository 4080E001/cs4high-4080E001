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
    printf("bmi is: %f\n",bmi);
    if (bmi<18.5){
        printf("to light.\n");
    }else if (bmi<=24){
        printf("Normal weight.\n");
    }else if (bmi<27){
        printf("to heavy.\n");
    }else if (bmi<30){
        printf("you are little fat.\n");
    }else if (bmi<35){
        printf("you are fat.\n");
    }else{
        printf("you are too fat.\n");
    }

    return 0;
}
