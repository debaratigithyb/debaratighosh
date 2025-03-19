#include <stdio.h>
#include <math.h>
int main()
 {
    double num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    printf("\nFor %.2f:\n", num1);
    printf("Floor value: %.2f\n", floor(num1));
    printf("Ceiling value: %.2f\n", ceil(num1));
    printf("\nFor %.2f:\n", num2);
    printf("Floor value: %.2f\n", floor(num2));
    printf("Ceiling value: %.2f\n", ceil(num2));
    printf("\nFor %.2f:\n", num3);
    printf("Floor value: %.2f\n", floor(num3));
    printf("Ceiling value: %.2f\n", ceil(num3));
    return 0;
}