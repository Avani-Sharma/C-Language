#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    if(num>=0 && num<=9){
        printf("1 digit num");
    }
    else if(num>=10 && num<=99){
        printf("2 digit num");
    }
    else if(num>=100 && num<=999){
        printf("3 digit num");
    }
    else{
        printf("invalid num/ more than 3 digit");
    }
}