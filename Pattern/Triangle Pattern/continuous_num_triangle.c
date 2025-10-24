#include<stdio.h>
int main(){

    /*print and take input n from user
    1
    2 3
    4 5 6
    7 8 9 10
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int num=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("%d ", num);
                num++;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}