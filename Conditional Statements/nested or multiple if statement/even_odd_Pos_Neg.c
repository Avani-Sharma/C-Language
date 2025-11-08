#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even number\n");
        if (n > 0)
            printf("Positive number\n");
        else if (n < 0)
            printf("Negative number\n");
        else
            printf("Zero\n");
    } else {
        printf("Odd number\n");
        if (n > 0)
            printf("Positive number\n");
        else
            printf("Negative number\n");
    }

    return 0;
}
