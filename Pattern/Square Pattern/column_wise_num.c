#include<stdio.h>
int main(){
    
    /* pattern and take input n from user
                1 1 1 1
                2 2 2 2
                3 3 3 3
                4 4 4 4*/
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}