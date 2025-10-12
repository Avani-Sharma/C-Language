#include<stdio.h>
int main(){
    /*print and take input from user
    1 2 3 4
    5 6 7 
    8 9 
    10
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=1;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}