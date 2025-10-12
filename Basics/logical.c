#include<stdio.h>
int main(){
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    int b;
    printf("enter b: ");
    scanf("%d", &b);

    //logical && operator ------> both conditions are true
    printf("%d", a>=10 && b<=20);
    printf("\n");

    //logical || operator -------> only one condition is true
    printf("%d", a>=10 || b<=20);
    printf("\n");


    //logical ! operator ---------> if condition is false it gives output true and if condition is true it gives output false
    printf("%d", !(a>=10 || b<=20));

}