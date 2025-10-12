#include<stdio.h>
int main(){
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    int b;
    printf("enter b: ");
    scanf("%d", &b);

    int add = a+b;
    printf("add = %d\n", add);

    int subtract = a-b;
    printf("subtract = %d\n", subtract);

    int multiplication = a*b;
    printf("multiplication = %d\n", multiplication);

    int division = a/b;
    printf("division = %d\n", division);

    int modulus = a%b;
    printf("modulus = %d", modulus);

}