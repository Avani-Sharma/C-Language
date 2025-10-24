#include<stdio.h>
int main(){

    /*print and take input n from user
    2  4  6  8
    10 12 14 
    16 18 
    20
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num = 2;

    for(int i=n; i>=1; i--){

        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("%-2d ", num);
                num+=2;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}