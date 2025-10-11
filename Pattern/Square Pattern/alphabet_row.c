#include<stdio.h>
int main(){
    
    /* print and take input from user
            A B C D 
            A B C D
            A B C D 
            A B C D  
     */
    
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        char temp = 'A';
        for(int j=1; j<=n; j++){
            printf("%c ", temp);
            temp++;
        }
        printf("\n");
    }
}