#include<stdio.h>
int main(){

    /* print and take input n from user
             2 4 6 8
             10 12 14 16
             18 20 22 24
             26 28 30 32*/
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", num);
            num+=2;
        }
        printf("\n");
    }




    /* print and take input m from user 
             2  4  6  8
             10 12 14 16
             18 20 22 24
             26 28 30 32*/
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    int num1=2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%-2d ", num1);
            num1+=2;
        }
        printf("\n");
    }
}