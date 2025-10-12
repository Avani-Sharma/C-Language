#include<stdio.h>
int main(){

    int r;
    printf("enter r: ");
    scanf("%d", &r);

    float PI =3.14;

    //area of circle
    int area = PI * r*r;;
    printf("area: %d\n", area);

    //circumference of circle
    int perimeter = 2* PI *r;
    printf("perimeter: %d", perimeter);


}