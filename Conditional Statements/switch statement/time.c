#include<stdio.h>
int main(){
    int choice;
    printf("enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("good morning");
        break;
        case 2:
        printf("good afternoon");
        break;
        case 3:
        printf("good night");
        break;
        default:
        printf("invalid input");
    }
}