#include<stdio.h>
int main(){
    char n='D';
    for(int i='A'; i<=n; i++){
        for(int j='A'; j<=n; j++){
            printf("%c ", j);
        }
        printf("\n");
    }
}