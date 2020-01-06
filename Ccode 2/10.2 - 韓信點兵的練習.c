#include <stdio.h>
int main (){
    int MAX,number,MIN;
    printf("enter the MAX and MIN: ");
    scanf("%d%d",&MAX,&MIN);
    for (number=MAX; number>=MIN; --number){
        if(number%3==2 && number%5==3 &&number%7==2){
        printf("%d ",number);
        }
    }
    return 0;
}
