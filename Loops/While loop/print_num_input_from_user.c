#include<stdio.h>
int main(){
    
    //print 1 to n ------> n take input from user
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        printf("%d ", i);
        i++;
    }
    printf("\n");


    //print m to 1 --------> m take input from user
    int m;
    printf("enter m: ");
    scanf("%d", &m);
    int j=10;
    while(j>=m){
        printf("%d ", j);
        j--;
    }
}