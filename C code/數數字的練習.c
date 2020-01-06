#include <stdio.h>
int main(){
    int integer=1,N;
    printf("enter the number: ");
    scanf("%d",&N);
    while (integer<=N){
    printf("%d\n",integer);
    integer+=1;
    }
    return 0;
}
