#include<stdio.h>
int main(){
    char color;
    printf("enter color: ");
    scanf("%c", &color);

    switch(color){
        case 'R':
        printf("stop");
        break;
        case 'G':
        printf("go");
        break;
        case 'Y':
        printf("wait");
        break;
        default:
        printf("invalid traffic signals");
    }
}