#include<stdio.h>
int main(){

    /*print and take input n from user
    1
    1 2
    1 2 3
    1 2 3 4
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("%d ", j);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}