#include<stdio.h>
int main(){
    int choice;
    printf("enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("grade A");
        break;
        case 2:
        printf("grade B");
        break;
        case 3:
        printf("grade C");
        break;
        case 4:
        printf("grade D");
        break;
        case 5:
        printf("grade E");
        break;
        default:
        printf("invalid");
    }
}