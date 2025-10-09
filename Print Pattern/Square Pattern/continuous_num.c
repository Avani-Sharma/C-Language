#include<stdio.h>
int main(){
    int n= 4;
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }




    //take input m fom user
    int m;
    printf("enter m: ");
    scanf("%d", &m);
    int num1 = 1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            printf("%d ", num1);
            num1++;
        }
        printf("\n");
    }

}