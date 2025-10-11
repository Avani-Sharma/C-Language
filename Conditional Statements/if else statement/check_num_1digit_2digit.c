#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    if(num>=0 && num<=9){
        printf("this number is 1 digit ");
    }else{
        printf("number is 2 digit or more than 2 digit");
    }
}