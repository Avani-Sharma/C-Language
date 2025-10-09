#include<stdio.h>
int main(){
    int n=4;
    int num= 16;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", num);
            num--;              //decrement for reverse num
        }
        printf("\n");
    }




    //take input m and num1 from user
    int m;                   //m ----->rows 
    printf("enter m: ");
    scanf("%d", &m);

    int num1;                //num1 -------> starting num1
    printf("enter num1: ");
    scanf("%d", &num1);
    for(int i=1; i<=m ; i++ ){
        for(int j=1; j<=m; j++){
            printf("%d ", num1);
            num1--;
        }
        printf("\n");
    }
}