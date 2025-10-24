#include<stdio.h>
int main(){

    /*print and take input n from user
    4 3 2 1
      3 2 1
        2 1
          1
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){

        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%d ", j);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}