#include <stdio.h>
 int main(){
     int integer, sum;
     printf("please enter the first integer");
     scanf("%d", &integer);
     sum=integer;
     printf("please enter the second integer");
     scanf("%d", &integer);
     sum=sum+integer;
     printf("please enter the third integer");
     scanf("%d", &integer);
     sum = sum+integer;
     printf("sum is %d.\n", sum);
     return 0;
}
