#include<stdio.h>
int main(){
    int Age;
    printf("enter Age: ");
    scanf("%d", &Age);
    if(Age>=18 && Age<=25){
        printf("eligible for exam A");
    }
    else if(Age>=26 && Age<=35){
        printf("eligible for exam B");
    }
    else if(Age>=36){
        printf("eligible for exam C");
    }
    else{
        printf("not eligible");
    }
} 