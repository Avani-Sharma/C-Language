#include<stdio.h>
int main(){
    int n =4;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }




    //take input m from user
    int m;
    printf("enter m: ");
    scanf("%d", &m);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}