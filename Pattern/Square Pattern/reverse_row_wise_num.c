#include<stdio.h>
int main(){

    /*pattern and take input n from user   
               4 3 2 1
               4 3 2 1
               4 3 2 1
               4 3 2 1   */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
}