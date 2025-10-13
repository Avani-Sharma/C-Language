#include<stdio.h>
int main(){

    int unit;
    printf("enter unit: ");
    scanf("%d", &unit);

    float bill;

    if(unit<=100){
        bill = unit*5;
    }
    else if(unit>101 && unit<200){
        bill = unit*7;
    }
    else if(unit>201 && unit<500){
        bill = unit*10;
    }
    else{
        bill = unit *15;
    }

    printf("the electricity bill Rs. = %.2f", bill);

}