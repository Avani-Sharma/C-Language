#include <stdio.h>
int main() {

    int hours;
    int seconds;

    printf("Enter time in hours: ");
    scanf("%d", &hours);

    seconds = hours * 60 * 60; // 1 hour = 60 minutes, 1 minute = 60 seconds

    printf("Total seconds = %d\n", seconds);

    return 0;
}
