#include<stdio.h>
int main(){

    /*print and take input n from user
              1
           3  5
        7  9 11
    13 15 17 19
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num = 1;

    for(int i=1; i<=n; i++){

        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%2d ", num);
                num+=2;;
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}