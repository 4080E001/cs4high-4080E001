#include <stdio.h>
int main(){
    int number,total;
    printf("please enter the number of customers:");
    scanf("%d",&number);
    total=number*300; //¤@¤H300¤¸
    if(total>=3000){
    total=total*0.8;
    }
    printf("total is:%d",total);
    return 0;
}
