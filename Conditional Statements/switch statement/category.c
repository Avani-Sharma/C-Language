#include<stdio.h>
int main(){
    int choice;
    printf("enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("beginner");
        break;
        case 2:
        printf("intermediate");
        break;
        case 3:
        printf("advance");
        break;
        default:
        printf("invalid");
    }
}