#include<stdio.h>
int main(){

    float fahrenheit, celsius;
    printf("enter fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) *5/9;
    printf("celsius = %.2f", celsius);
}