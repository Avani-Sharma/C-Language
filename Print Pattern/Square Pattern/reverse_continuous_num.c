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
}