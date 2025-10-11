#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    int first_digit = num/10;    //extract first_digit
    int last_digit = num%10;         //extract last_digit
    if(first_digit == last_digit){
        printf("both are same");
    }else{
        printf("both are different");
    }
}