#include<stdio.h>
int main(){

    /*pattern and take input n from user
               1 2 3 4
               1 2 3 4
               1 2 3 4
               1 2 3 4   */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}