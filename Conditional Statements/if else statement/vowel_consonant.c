#include<stdio.h>
int main(){
    char ch;
    printf("enter ch: ");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("vowel");
    }else{
        printf("consonant");
    }

    printf("\n");



    //long version of if else only

    if(ch=='a'){
        printf("vowel");
    }else{
        if(ch=='e'){
            printf("vowel");
        }else{
            if(ch=='i'){
                printf("vowel");
            }else{
                if(ch=='o'){
                    printf("vowel");
                }else{
                    if(ch=='u'){
                        printf("vowel");
                    }else{
                        printf("consonant");
                    }
                }
            }
        }
    }
}