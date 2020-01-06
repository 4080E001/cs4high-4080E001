#include <stdio.h>
 int main(){
     int integer1,integer2;
     printf("please entre the integer1=");
     scanf("%d",&integer1);
     printf("please enter the integer2=");
     scanf("%d",&integer2);

     integer1=integer1^integer2;
     integer2=integer1^integer2;
     integer1=integer1^integer2;

     printf("integer1 is %d",integer1);
     printf("integer2 is %d",integer2);
     return 0;
}
