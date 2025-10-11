#include<stdio.h>
int main(){

    /*print and take input n from user
    4
    3 3
    2 2 2
    1 1 1 1
    */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        for(int j=n; j>=i; j--){
            printf("%d ", i);
        }
        printf("\n");
    }
}