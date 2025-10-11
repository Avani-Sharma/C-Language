#include<stdio.h>
int main(){
    
    /* pattern and take input n from user
                8 6 4 2 
                8 6 4 2
                8 6 4 2
                8 6 4 2  */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            printf("%d ", 2*j);
        }
        printf("\n");
    }





    /* pattern and take input m from user
                8 8 8 8
                6 6 6 6
                4 4 4 4
                2 2 2 2  */
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    for(int i=m; i>=1; i--){
        for(int j=m; j>=1; j--){
            printf("%d ", 2*i);
        }
        printf("\n");
    }

}