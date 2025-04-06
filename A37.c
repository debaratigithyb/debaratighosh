#include <stdio.h>
void printPyramid(int n) {
    int i, j, space;
    for (i = 1; i <= n; i++) {
        for (space = 0; space < n - i; space++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");

        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    printPyramid(n);

    return 0;
}