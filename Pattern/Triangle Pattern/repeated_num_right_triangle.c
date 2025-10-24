#include<stdio.h>
int main(){

    /*print and take input n from user
    1
    2 2
    3 3 3
    4 4 4 4
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){

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