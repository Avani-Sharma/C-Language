#include<stdio.h>
int main(){
    int choice;
    printf("choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("area of circle: PI * r*r");
        break;
        case 2:
        printf("area of rectangle: length*breadth");
        break;
        case 3:
        printf("area of triangle: 1/2 * base *height");
        break;
        case 4:
        printf("area of square: side * side");
        default:
        printf("invalid input");
    }
}