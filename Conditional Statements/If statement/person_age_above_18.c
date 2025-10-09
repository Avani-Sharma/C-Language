#include<stdio.h>
int main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age>18){
        printf("older");
    }

    printf("\n");


    //if age is less than 0 (invalid case)
    int age1;
    printf("enter age1: ");
    scanf("%d", &age1);

    if(age1<0){
        printf("invalid case");
    }
}