#include<stdio.h>
int main(){

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n;i++){

        if(i%2!=0){
            printf("%d\n", i);
            sum= sum+i;
        }

    }

    printf("sum: %d", sum);
}