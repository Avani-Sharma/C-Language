#include<stdio.h>
int main(){
    int n=1;
    for(int i=8;i>=4;i--){
        for(int j=8; j>=n; j--){
            if(j%2==0){
                printf("%d", j);
            }
        }
        printf("\n");
    }
}