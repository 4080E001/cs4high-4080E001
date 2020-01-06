#include <stdio.h>
int main(){
    int i=0,j=0;
    while(i<9){
        i++;
        j=0;
        while(j<9){
            j++;
            printf("%dx%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
