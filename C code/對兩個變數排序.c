#include <stdio.h>
int main(){
    int a,b,x;
    scanf("%d%d",&a,&b);
    printf("before: %d %d\n",a,b);
    if(a>b){
        x=a,a=b,b=x;}
    printf("after %d %d\n",a,b);
    return 0;
}
