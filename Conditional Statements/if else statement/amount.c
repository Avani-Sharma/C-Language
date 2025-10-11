#include<stdio.h>
int main(){
    int amount;
    printf("enter amount: ");
    scanf("%d", &amount);

    int balance;
    printf("enter balance: ");
    scanf("%d", &balance);
    if(amount<=balance){
        printf("transaction sucessful");
    }else{
        printf("insufficient balance");
    }
}