#include <stdio.h>
int main(){
    int answer=5;
    int guess;
    printf("piease enter your guess:");
    scanf("%d",&guess);
    if (guess>answer){
        printf("too large!\n");
    }
    if (guess<answer){
        printf("too small!\n");
    }
    if (guess==answer){
        printf("correct!\n");
    }
    return 0;
}
