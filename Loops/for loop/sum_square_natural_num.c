#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int sum = 0;

    for(int i=1; i<=n; i++){
        printf("%d ", i);
        sum += i*i;
    }
    printf("sum: %d", sum);
}