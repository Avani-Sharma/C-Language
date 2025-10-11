#include<stdio.h>
int main(){

    /* print and take input n from user
             16 15 14 13
             12 11 10 9
             8 7 6 5
             4 3 2 1*/
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=16;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }




    /* print and take input m from user
             16 15 14 13
             12 11 10 9
             8  7  6  5 
             4  3  2  1*/
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    int num1=16;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%-2d ", num1);
            num1--;
        }
        printf("\n");
    }
}