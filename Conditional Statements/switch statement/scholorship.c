#include<stdio.h>
int main(){
    int choice;
    printf("enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("full");
        break;
        case 2:
        printf("half");
        break;
        case 3:
        printf("quarter");
        break;
        case 4:
        printf("none");
        break;
        default:
        printf("invalid num"); 

    }
}