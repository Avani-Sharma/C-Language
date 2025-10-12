#include<stdio.h>
int main(){
    /*print and take input from user
    2  4  6  8
    10 12 14  
    16 18
    20
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=2;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("%-2d ", num);
            num+=2;;
        }
        printf("\n");
    }
}