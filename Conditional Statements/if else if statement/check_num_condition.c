#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);
    
    if(num>0 && num%2==0){
        printf("positive even");
    }
    else if(num>0 && num%2!=0){
        printf("positive odd");
    }
    else if(num<0 && num%2==0){
        printf("negative even");
    }
    else if(num<0 && num%2!=0){
        printf("negative odd");
    }
    else{
        printf("zero");
    }
} 