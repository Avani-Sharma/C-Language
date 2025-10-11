#include<stdio.h>
int main(){
    
    /* pattern and take input n from user
                2 4 6 8 
                2 4 6 8
                2 4 6 8
                2 4 6 8  */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", 2*j);
        }
        printf("\n");
    }





    /* pattern and take input m from user
                2 2 2 2
                4 4 4 4
                6 6 6 6
                8 8 8 8  */
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            printf("%d ", 2*i);
        }
        printf("\n");
    }

}