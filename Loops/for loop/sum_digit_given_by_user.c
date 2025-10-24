#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int sum = 0;
    for( ; n>0; n = n/10){
        int d = n%10;
        sum = sum+d;
        
    }
    printf("sum:%d", sum);
}