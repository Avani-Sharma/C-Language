#include<stdio.h>
int main(){
    int salary;
    printf("enter salary: ");
    scanf("%d", &salary);

    if(salary>=50000){
        printf("yes, salary is greater than 50000");
    }
}