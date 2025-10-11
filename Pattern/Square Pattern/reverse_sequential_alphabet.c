#include<stdio.h>
int main(){

    /* print and take input from the user
        P O N M
        L K J I
        H G F E
        D C B A   
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    char temp = 'P';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%c ", temp);
            temp--;
        }
        printf("\n");
    }
}