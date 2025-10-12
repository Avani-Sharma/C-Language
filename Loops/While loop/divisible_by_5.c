#include<stdio.h>
int main(){
    int i = 1;
    while(i<=50){
        if(i%5==0){
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
}