#include<stdio.h>
int main(){

    //input char 'a' than add two num otherwise input is not matched 

    char ch;
    printf("enter ch: ");
    scanf("%c", &ch);

    if(ch=='a'){
        int x, y, sum;
        printf("enter x and y: ");
        scanf("%d %d", &x, &y);
        sum = x+y;
        printf("sum: %d", sum);
    }else{
        printf("input is not matched");
    }
}