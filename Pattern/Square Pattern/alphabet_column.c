#include<stdio.h>
int main(){
    
    /* print and take input from user
            A A A A 
            B B B B
            C C C C 
            D D D D  
     */
    
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    char temp = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%c ", temp);
        }
        temp++;
        printf("\n");
    }
}