#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int sum =0;
    for(int i=1; i<=n; i++){
        if(n%i==0){   //if i is a factor
            printf("%d ", i);
            sum+=i;
        }
    }
    printf("sum: %d", sum);
}