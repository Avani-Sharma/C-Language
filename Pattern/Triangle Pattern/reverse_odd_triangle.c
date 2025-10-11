#include<stdio.h>
int main(){

    /*print and take input n from user
    19
    17 15
    13 11 9
    7  5  3 1
    */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=19;
    for(int i=n; i>=1; i--){
        for(int j=n; j>=i; j--){
            printf("%-2d ", num);
            num-=2;
        }
        printf("\n");
    }
}