#include <stdio.h>
int main(){
    int count,N;
    printf("N=: ");
    scanf("%d",&N);
    for (count=1; count<=N; count++){
        printf("*");
    }
    printf("\n");
    return 0;
}
