#include<stdio.h>
int main(){

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    //square
    int square = n*n;
    printf("square = %d\n", square);

    //cube
    int cube = n*n*n;
    printf("cube = %d", cube);
}