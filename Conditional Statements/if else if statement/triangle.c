#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter side of a: ");
    scanf("%d", &a);

    printf("enter side of b: ");
    scanf("%d", &b);

    printf("enter side of c: ");
    scanf("%d", &c);

    if(a==b && b==c){
        printf("equilateral triabgle.");
    }else if(a==b || b==c|| a==c){
        printf("isosceles triangle.");
    }else{
        printf("scalene triangle");
    }
}