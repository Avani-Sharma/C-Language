#include<stdio.h>
int main(){
    int temperature;
    printf("enter temperature: ");
    scanf("%d", &temperature);

    if(temperature>40){
        printf("it's hot");
    }
}