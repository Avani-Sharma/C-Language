#include<stdio.h>
int main(){
    char ch;
    printf("enter character: ");
    scanf("%c", &ch);

    if(ch=='a' ||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
       ch=='A'|| ch=='E' ||ch=='I'||ch=='O'|| ch=='U'){
        printf("vowel");
    }else if((ch>='A' && ch<='Z')||(ch>='a' &&ch<='z')){
        printf("consonant");
    }else if(ch>='0' && ch<='9'){
        printf("digit");
    }else{
        printf("special symbol");
    }
}