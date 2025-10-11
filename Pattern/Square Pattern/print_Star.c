#include<stdio.h>
int main(){

    /* print and take input n from user
          * * * *
          * * * *
          * * * *
          * * * *   
    */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("* ");
        }
        printf("\n");
    }
}