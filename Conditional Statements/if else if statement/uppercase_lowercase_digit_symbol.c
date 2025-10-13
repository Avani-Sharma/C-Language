#include<stdio.h>

int main() {
    char ch;
    printf("Enter ch: ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z') {
        printf("uppercase");
    }
    else if(ch>='a' && ch<='z') {
        printf("lowercase");
    }
    else if(ch>='0' && ch<='9') {
        printf("digit");
    }
    else{
        printf("special symbol");
    }

    return 0;
}
