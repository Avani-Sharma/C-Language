#include<stdio.h>
int main(){

    /* print and take input from the user
        A B C D
        E F G H 
        I J K L 
        M N O P   
    */

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    char temp = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%c ", temp);
            temp++;
        }
        printf("\n");
    }
}