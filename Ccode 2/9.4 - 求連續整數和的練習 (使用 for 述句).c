#include <stdio.h>//1+.....100=(for)
int main(){
    int count,sum=0,N;
    printf("N=: ");
    scanf("%d",&N);
    for (count=1; count<=N; count++){
        sum+=count;
        }
    printf("%d",sum);
    return 0;
}
