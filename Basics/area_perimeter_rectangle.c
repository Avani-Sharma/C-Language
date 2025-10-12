#include<stdio.h>
int main(){

    int l;
    printf("enter l: ");
    scanf("%d", &l);

    int b;
    printf("enter b: ");
    scanf("%d", &b);

    //area of rectangle
    int area = l*b;
    printf("area: %d\n", area);

    //perimeter of rectangle
    int perimeter = 2*(l+b);
    printf("perimeter: %d", perimeter);


}