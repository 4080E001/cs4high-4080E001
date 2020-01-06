#include <stdio.h>
int main(){
    int a,b,max;
    printf("please enter the first integer: ");
    scanf("%d", &a);
    printf("please enter the second integer: ");
    scanf("%d", &b);
    max=a;
    if(max<=b){
       max=b;
    }
    printf("the maxinum is %d.\n",max);
    return 0;
}
