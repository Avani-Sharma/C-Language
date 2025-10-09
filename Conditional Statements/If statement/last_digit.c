#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    int last_digit ;

    last_digit = num%10;
    if(last_digit == 5){
        printf("last_digit is 5");
    }
}