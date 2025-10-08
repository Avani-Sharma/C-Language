#include<stdio.h>
int main(){
    int n=8;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=n; j++){
            if(j%2==0){
                printf("%d", j);
            }
        }
        printf("\n");
    }
}