#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);
    if(num%3==0){
        printf("yes, num is divisible by 3");
    }
}