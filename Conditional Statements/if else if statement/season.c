#include<stdio.h>
int main(){
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if(month >= 3 && month <= 6){
        printf("Summer");
    }else if(month >= 7 && month <= 10){
        printf("Rainy");
    }else if(month == 11 || month == 12 || month == 1 || month == 2){
        printf("Winter");
    }else{
        printf("Invalid month number");
    }

    return 0;
}
