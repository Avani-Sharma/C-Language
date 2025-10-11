#include<stdio.h>
int main(){

    /*print and take input n from user
    1 0 1 0
    0 1 0 1
    1 0 1 0
    0 1 0 1
    */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i+j)%2==0){
                printf("1 ");
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}