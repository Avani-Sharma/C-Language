#include<stdio.h>
int main(){

    /* print and take input n from user
             1 2 3 4
             5 6 7 8
             9 10 11 12
             13 14 15 16*/
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }




    /* print and take input m from user
             1  2  3  4
             5  6  7  8
             9  10 11 12
             13 14 15 16*/
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    int num1=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%-2d ", num1);
            num1++;
        }
        printf("\n");
    }
}