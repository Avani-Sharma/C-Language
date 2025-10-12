#include<stdio.h>
int main(){

    float celsius, fahrenheit;
    printf("enter celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius*9/5) + 32;
    printf("fahrenheit = %.2f", fahrenheit);
}