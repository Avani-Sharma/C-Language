#include<stdio.h>
int main(){
    int n=1;

    for(int i=4; i>=n; i--){
        for(int j=4; j>=n; j--){
            printf("%d", i);
        }
        printf("\n");
    }





    //take input m from user
    int m;
    printf("enter m: ");
    scanf("%d", &m);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            printf("%d ", m-i+1);
        }
        printf("\n");
    }
    
}