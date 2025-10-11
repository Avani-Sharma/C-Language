#include<stdio.h>
int main(){

    /* print and take input n from user
             32 30 28 26
             24 22 20 18
             16 14 12 10
             8 6 4 2      */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=32;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", num);
            num-=2;
        }
        printf("\n");
    }




    /* print and take input m from user
             32 30 28 26
             24 22 20 18
             16 14 12 10
             8  6  4  2   */
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    int num1=32;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%-2d ", num1);
            num1-=2;
        }
        printf("\n");
    }
}