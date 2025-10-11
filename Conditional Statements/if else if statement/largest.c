#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("enter num1, num2, num3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1>num2 && num1>num3){
        printf("num1 is largest");
    }else if(num2>num1 && num2>num3){
        printf("num2 is largest");
    }else {
        printf("num3 is largest");
    }
}