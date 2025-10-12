#include<stdio.h>
int main(){
    /*print and take input from user
    1  3  5  7
    9  11 13 
    15 17 
    19
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=1;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("%-2d ", num);
            num+=2;;
        }
        printf("\n");
    }
}