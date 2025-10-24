#include<stdio.h>
int main(){

    /*print and take input n from user
          10
        9 8 
      7 6 5
    4 3 2 1
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num = 10;

    for(int i=1; i<=n; i++){

        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%d ", num);
                num--;;
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}