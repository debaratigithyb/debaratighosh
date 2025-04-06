#include <stdio.h>

// Call by Value: Function to swap two numbers (does NOT affect original values)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

// Call by Reference: Function to swap two numbers (modifies original values)
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call by Value (Does NOT change x and y)
    swapByValue(x, y);
    printf("After swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call by Reference (CHANGES x and y)
    swapByReference(&x, &y);
    printf("After swapByReference:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}