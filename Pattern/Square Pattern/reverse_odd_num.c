#include<stdio.h>
int main(){
    
    /* pattern and take input n from user
                7 5 3 1 
                7 5 3 1
                7 5 3 1
                7 5 3 1  */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            printf("%d ", 2*j-1);
        }
        printf("\n");
    }





    /* pattern and take input m from user
                7 7 7 7
                5 5 5 5
                3 3 3 3
                1 1 1 1  */
    int m;
    printf("enter m: ");
    scanf("%d", &m);

    for(int i=m; i>=1; i--){
        for(int j=m; j>=1; j--){
            printf("%d ", 2*i-1);
        }
        printf("\n");
    }

}