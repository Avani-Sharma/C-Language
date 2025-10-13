#include<stdio.h>
int main(){
    int a , b, result ;
    printf("enter a: ");
    scanf("%d", &a);

    char operator;
    printf("enter operator: ");
    scanf(" %c", &operator);

    printf("enter b: ");
    scanf("%d", &b);

    switch(operator){
        case '+':
        result = a+b;
        printf("addition: %d", result);
        break;
        case '-':
        result = a-b;
        printf("subtraction: %d", result);
        break;
        case '*':
        result = a*b;
        printf("multiplication: %d", result);
        break;
        case '/':
        result = a/b;
        printf("division: %d", result);
        default:
        printf("invalid input: ");

    }
}