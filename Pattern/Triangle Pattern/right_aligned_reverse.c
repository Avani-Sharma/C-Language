#include<stdio.h>
int main(){

    /*print and take input n from user
          4
        3 3
      2 2 2
    1 1 1 1
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%d ", n-i+1);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}