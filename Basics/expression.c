#include<stdio.h>
int main(){

    //solve this expression --------> (a + b) * c / d
    int a, b, c, d;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter c: ");
    scanf("%d", &c);
    printf("enter d: ");
    scanf("%d", &d);

    int result = (a+b)*c/d;

    printf("result = %d", result);

}