#include<stdio.h>
int main(){
    //declaration of variable
    int a;
    //initialization of variable
    a=15;
    printf("%d\n", a);



    //change variable values
    int num = 14;
    int other_num =19;
    num = other_num;
    printf("%d\n", other_num);


    
    //declare multiple values
    int x, y, z;
    x = y = z =50;
    printf("%d", x+y+z);

    return 0;

}