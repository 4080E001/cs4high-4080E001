#include <stdio.h>
int main(){
    int id;
    printf("ID: ");
    scanf("%d",&id);
    switch (id) {
        case 2:  //John
            printf("John\n");
            break;
        case 13: //Mary
            printf("Mary\n");
            break;
        case 16: //Amt
            printf("Amy\n");
            break;
        default:
            printf("Not found\n");
    }
    return 0;
}
