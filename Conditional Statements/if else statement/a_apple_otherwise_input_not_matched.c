#include<stdio.h>
int main(){
    char ch;
    printf("enter ch: ");
    scanf("%c", &ch);

    if(ch=='a'){
        printf("apple");
    }else{
        printf("input is not matched");
    }
}