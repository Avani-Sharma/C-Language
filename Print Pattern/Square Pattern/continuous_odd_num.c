#include<stdio.h>
int main(){
    int n=4;
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", num);
            num=num+2;
        }
        printf("\n");
    }
}