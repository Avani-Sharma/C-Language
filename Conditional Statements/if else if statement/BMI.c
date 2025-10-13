#include<stdio.h>

int main() {
    float bmi;

    printf("Enter your BMI value: ");
    scanf("%f", &bmi);

    if(bmi < 18.5) {
        printf("Underweight");
    }
    else if(bmi >= 18.5 && bmi <= 24.9) {
        printf("Normal");
    }
    else if(bmi >= 25 && bmi <= 29.9) {
        printf("Overweight");
    }
    else if(bmi >= 30) {
        printf("Obese");
    }
    else {
        printf("Invalid BMI value");
    }

    return 0;
}
