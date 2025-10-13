#include<stdio.h>
int main(){
    int season;
    printf("enter season: ");
    scanf("%d", &season);

    switch(season){
        case 1:
        printf("winter");
        break;
        case 2:
        printf("spring");
        break;
        case 3: 
        printf("autumn");
        break;
        case 4:
        printf("summer");
        break;
        default:
        printf("invalid season");
    }
}