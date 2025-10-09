#include<stdio.h>
int main(){
    int n=8;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=n; j++){
            if(j%2==0){
                printf("%d", j);
            }
        }
        printf("\n");
    }




    //take input m from user
    int m;                      
    printf("enter m: ");
    scanf("%d", &m);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            printf("%d ", 2*j);
        }
        printf("\n");
    }
}