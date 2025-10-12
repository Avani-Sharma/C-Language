#include <stdio.h>
int main() {
    int a , b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    if (a<b) {
        printf("a is smallest than b");
    } else {
        printf("b is smallest than a");
    }

    return 0;
}
