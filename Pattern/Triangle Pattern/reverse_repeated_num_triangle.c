#include<stdio.h>
int main(){

    /*print and take input n from user
    4 4 4 4
    3 3 3
    2 2
    1
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("%d ", i);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}