#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("enter num1, num2: ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2){
        printf("num1 is largest");
    }else{
        printf("num2 is largest");
    }
}