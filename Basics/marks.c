#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter c: ");
    scanf("%d", &c);

    int total = a+b+c;
    printf("total: %d\n", total);

    float avg = total/3.0;
    printf("avg: %f", avg);

}