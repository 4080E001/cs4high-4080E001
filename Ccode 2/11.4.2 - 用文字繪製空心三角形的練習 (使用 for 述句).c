#include <stdio.h>
int main(){
    int i,j,N;
    printf("N= ");
    scanf("%d",&N);
    for(i=1; i<=N; i++){
       for(j=1; j<=N; j++){
        if(j<=i){
            if(i==N||i==j||j==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
       }
       printf("\n");
    }
    return 0;
}
