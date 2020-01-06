#include <stdio.h>
int main(){
    int grade;
    printf("please enter the grade: ");
    scanf("%d",&grade);
    if (grade>=60){
        printf("pass");
    } else{
        printf("fall");
    }
    return 0;
}
