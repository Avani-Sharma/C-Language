#include<stdio.h>
int main(){
    int n =4;
    char ch = 'P';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
}