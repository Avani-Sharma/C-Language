#include<stdio.h>
int main(){
    int n=1;
    for(int i=8;i>=4;i--){
        for(int j=8; j>=n; j--){
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
            printf("%d ", 2*(m-j+1));
        }
        printf("\n");
    }

}