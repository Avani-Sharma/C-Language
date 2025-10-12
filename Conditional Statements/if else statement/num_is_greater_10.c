#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    if(num>10){
        printf("num is greater than 10");
    }else{
        printf("num is not greater than 10");
    }
}