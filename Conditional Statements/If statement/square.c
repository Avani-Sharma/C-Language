#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    int square = num*num;
    if(square > 100){
        printf("square is greater than 100");
    }
}