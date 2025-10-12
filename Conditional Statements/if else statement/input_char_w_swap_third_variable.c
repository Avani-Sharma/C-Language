#include<stdio.h>
int main(){

    //input char 'w' than swap third variable otherwise input is not matched 

    char ch;
    printf("enter ch: ");
    scanf("%c", &ch);

    if(ch=='w'){

        int a, b;
        printf("enter a and b: ");
        scanf("%d %d", &a, &b);

        printf("before swapping: a=%d, b=%d\n", a, b);
        int temp = a;
        a= b;
        b=temp;
        printf("after swapping: a=%d, b=%d\n", a, b);

    }else{
        printf("input is not matched");
    }
}