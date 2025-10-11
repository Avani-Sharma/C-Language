#include<stdio.h>
int main(){
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);

    if(marks>=85){
        printf("excellent");
    }else if(marks>=70 && marks<=84){
        printf("very good");
    }else if(marks>=50 && marks<=69){
        printf("good");
    }else if(marks>=35 && marks<=49){
        printf("pass");
    }else if(marks<35){
        printf("fail");
    }else{
        printf("invalid number");
    }
}