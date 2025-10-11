#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);
    int last_digit = num%10;
    if(last_digit ==5 ){
        printf("last digit is 5");
    }else{
        printf("last digit is not 5");
    }
}