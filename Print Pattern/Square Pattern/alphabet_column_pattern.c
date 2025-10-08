#include<stdio.h>
int main(){
    char n='D';
    for(char i='A'; i<=n; i++){
        for(char j='A'; j<=n; j++){
            printf("%c ", i);
        }
        printf("\n");
    }
}