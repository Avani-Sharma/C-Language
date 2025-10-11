#include<stdio.h>
int main(){
    
    /* pattern and take input n from user
                1 3 5 7
                1 3 5 7
                1 3 5 7
                1 3 5 7  */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", 2*j-1);
        }
        printf("\n");
    }





    /* pattern and take input m from user
                1 1 1 1
                3 3 3 3
                5 5 5 5
                7 7 7 7  */
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            printf("%d ", 2*i-1);
        }
        printf("\n");
    }

}