#include<stdio.h>
int main(){
    char ch;
    printf("enter ch: ");
    scanf("%c", &ch);
    
    switch(ch){
        case 'a':
        printf("you choose option A");
        break;
        case 'b':
        printf("you choose option B");
        break;
        case 'c':
        printf("you choose option C");
        break;
        default:
        printf("invalid input");
    }
}