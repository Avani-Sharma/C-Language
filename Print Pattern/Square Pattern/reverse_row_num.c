#include<stdio.h>
int main(){
    int n=1;

    for(int i=4; i>=n; i--){
        for(int j=4; j>=n; j--){
            printf("%d", i);
        }
        printf("\n");
    }
}