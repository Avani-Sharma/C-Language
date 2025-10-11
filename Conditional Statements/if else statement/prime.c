#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    if(num==2 || num==3|| num==5|| num==7){
        printf("prime num");
    }else{
        printf("not a prime num");
    }
}