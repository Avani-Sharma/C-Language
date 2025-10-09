#include<stdio.h>
int main(){
    int n=4;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }



    //take input m from user
    int m;
    printf("enter m: ");
    scanf("%d", &m);
    char letter = 'A';
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
}