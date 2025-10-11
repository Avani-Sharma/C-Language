#include<stdio.h>
int main(){
    int time;
    printf("Enter time (0-23): ");
    scanf("%d", &time);

    if(time >= 4 && time <= 11){
        printf("Morning");
    }
    else if(time >= 12 && time <= 16){
        printf("Afternoon");
    }
    else if(time >= 17 && time <= 20){
        printf("Evening");
    }
    else if(time >= 21 && time <= 23 || time >= 0 && time <= 3){
        printf("Night");
    }
    else{
        printf("Invalid time");
    }

    return 0;
}
