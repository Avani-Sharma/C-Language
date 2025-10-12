#include<stdio.h>
int main(){

    int a;
    printf("enter a: ");
    scanf("%d", &a);

    int b;
    printf("enter b: ");
    scanf("%d", &b);

    //here a is update in every printf function 
    printf("a += b: %d\n", a+=b);
    printf("a -= b: %d\n", a-=b);
    printf("a *= b: %d\n", a*=b);
    printf("a /= b: %d\n", a/=b);
    printf("a %= b: %d", a%=b);

}