#include <stdio.h>
int main(){
    int N,C;
    printf("N= ");
    scanf("%d",&N);
    for(C=1; C<=N*N; C++){
        printf("*");
        if(C%N==0){
        printf("\n");
        }
    }
    return 0;
}
