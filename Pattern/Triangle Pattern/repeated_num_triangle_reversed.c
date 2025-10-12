#include<stdio.h>
int main(){
    /*print and take input from user
    1 1 1 1
    2 2 2
    3 3
    4
    */
   
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
