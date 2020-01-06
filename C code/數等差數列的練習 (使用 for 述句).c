#include <stdio.h>
int main(){
    int count,N,M;
    printf("enter two number: ");
    scanf("%d%d",&N,&M);
    if (M>N){
        for (count=N; count<=M; count++){
            printf("%d\n",count);
        }
    } else{
        for (count=N; count>=M; count--){
            printf("%d\n",count);
        }
    }
    return 0;
}
