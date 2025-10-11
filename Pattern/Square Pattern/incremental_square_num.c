#include<stdio.h>
int main(){

    /* print and take input n from user
    1 2 3 4  
    2 3 4 5  
    3 4 5 6  
    4 5 6 7
    */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", i+j-1);
        }
        printf("\n");
    }
}