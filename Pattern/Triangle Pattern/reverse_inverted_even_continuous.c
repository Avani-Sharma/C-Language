#include<stdio.h>
int main(){

    /*print and take input n from user
    20 18 16 14
    12 10 8  
    6 4 
    2
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num =20;

    for(int i=n; i>=1; i--){

        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("%-2d ", num);
                num-=2;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}