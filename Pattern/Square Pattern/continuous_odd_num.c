#include<stdio.h>
int main(){

    /* print and take input n from user
             1 3 5 7
             9 11 13 15
             17 19 21 23
             25 27 29 31*/
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", num);
            num+=2;
        }
        printf("\n");
    }




    /* print and take input m from user 
             1  3  5  7
             9  11 13 15
             17 19 21 23
             25 27 29 31*/
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    int num1=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%-2d ", num1);
            num1+=2;
        }
        printf("\n");
    }
}