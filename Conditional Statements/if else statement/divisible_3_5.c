#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    if(num%3==0 && num%5==0){
        printf("divisible by 3 and 5");
    }
    else{
        printf("not divisible by 3 and 5");
    }
}