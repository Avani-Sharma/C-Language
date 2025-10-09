#include<stdio.h>
int main(){
    char ch;
    printf("enter character: ");
    scanf("%c", &ch);

    if(ch=='A' || ch=='E' || ch=='I' || ch=='o' || ch=='U' ||
       ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("vowel");
       }
}