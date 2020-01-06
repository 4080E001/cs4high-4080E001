#include <stdio.h>
int main(){
    int N,number;
    printf("enter the integer: ");
    scanf("%d",&N);
    for (number=1; number<=N; number++){
        if(N%number==0){
        printf("%d ",number);
        }
    }
    return 0;
}
