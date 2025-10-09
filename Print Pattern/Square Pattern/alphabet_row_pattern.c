#include<stdio.h>
int main(){
    char n='D';
    for(int i='A'; i<=n; i++){
        for(int j='A'; j<=n; j++){
            printf("%c ", j);
        }
        printf("\n");
    }




    //take input m from user
    int m;
    printf("enter m: ");
    scanf("%d", &m);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            char letter = 'A' + j-1; 
            printf("%c ", letter);
        }
        printf("\n");
    }
}