#include<stdio.h>
int main(){

    /* print and take input n from user
             31 29 27 25
             23 21 19 17
             15 13 11 9
             7 5 3 1    */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=31;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", num);
            num-=2;
        }
        printf("\n");
    }




    /* print and take input m from user
             31 29 27 25
             23 21 19 17
             15 13 11 9
             7  5  3  1  */
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    int num1=31;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%-2d ", num1);
            num1-=2;
        }
        printf("\n");
    }
}