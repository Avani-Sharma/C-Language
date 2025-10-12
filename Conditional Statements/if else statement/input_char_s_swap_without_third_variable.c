#include<stdio.h>
int main(){

    //input char 's' than swap without third variable otherwise input is not matched 

    char ch;
    printf("enter ch: ");
    scanf("%c", &ch);

    if(ch=='s'){

        int a, b;
        printf("enter a and b: ");
        scanf("%d %d", &a, &b);

        printf("before swapping: a=%d, b=%d\n", a, b);
        a= a+b;
        b= a-b;
        a= a-b;
        printf("after swapping: a=%d, b=%d\n", a, b);


    }else{
        printf("input is not matched");
    }
}