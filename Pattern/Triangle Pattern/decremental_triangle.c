#include<stdio.h>
int main(){

    /* print and take input n from user
     1 2 3 4
     1 2 3
     1 2
     1
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){

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