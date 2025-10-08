#include<stdio.h>
int main(){
    int n = 1;
    for(int i = 7; i>=4; i--){
        for(int j=7; j>=n; j--){
            if(j%2!=0){
              printf("%d", j);
            }  
        }
        printf("\n");
    }
}