#include<stdio.h>
int main(){

    /* print and take input n from user
    A B C D
    B C D E
    C D E F
    D E F G

    */
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%c ", 'A' +i+j-2);
        }
        printf("\n");
    }
}