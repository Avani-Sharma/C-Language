#include<stdio.h>
int main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age>=0 && age<=13){
        printf("child");
    }else if(age>=14 && age<=19){
        printf("teenager");
    }else if(age>=20 && age<=45){
        printf("adult");
    }else{
        printf("senior citizen");
    }
}