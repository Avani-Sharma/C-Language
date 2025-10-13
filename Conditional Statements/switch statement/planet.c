#include <stdio.h>

int main() {
    int planet;
    printf("Enter a planet number (1-8): ");
    scanf("%d", &planet);

    switch(planet) {
        case 1:
            printf("Mercury\n");
            break;
        case 2:
            printf("Venus\n");
            break;
        case 3:
            printf("Earth\n");
            break;
        case 4:
            printf("Mars\n");
            break;
        case 5:
            printf("Jupiter\n");
            break;
        case 6:
            printf("Saturn\n");
            break;
        case 7:
            printf("Uranus\n");
            break;
        case 8:
            printf("Neptune\n");
            break;
        default:
            printf("Invalid number! Enter 1 to 8.\n");
    }

    return 0;
}
