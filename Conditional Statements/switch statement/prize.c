#include<stdio.h>
int main(){
    int choice;
    printf("enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("first prize");
        break;
        case 2:
        printf("second prize");
        break;
        case 3:
        printf("third prize");
        break;
        case 4:
        printf("consolation");
        break;
        case 5: 
        printf("better luck next time ");
        break;
        default:
        printf("invalid number");
    }
}