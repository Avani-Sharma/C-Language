#include<stdio.h>
int main(){
    char n='D';
    for(char i='A'; i<=n; i++){
        for(char j='A'; j<=n; j++){
            printf("%c ", i);
        }
        printf("\n");
    }



    //take input m from user
    int m;
    printf("enter m: ");
    scanf("%d", &m);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            char letter = 'A' + i-1; 
            printf("%c ", letter);
        }
        printf("\n");
    }
}