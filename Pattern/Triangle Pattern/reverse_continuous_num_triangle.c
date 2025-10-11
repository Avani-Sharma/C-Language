#include<stdio.h>
int main(){

    /*print and take input n from user
    10
    9 8
    7 6 5 
    4 3 2 1
    */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=10;
    for(int i=n; i>=1; i--){
        for(int j=n; j>=i; j--){
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }
}