#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int sum=0;

    for(int i =1; i<=n; i++){
        if(i%3==0 && i%5==0){
            sum+= i;
        }
    }
    printf("sum: %d", sum);
}