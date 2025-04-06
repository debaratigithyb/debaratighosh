#include <stdio.h>
void printDiamond(int n) {
    int i, j, space;
    for (i = 1; i <= n; i += 2) {
        for (space = 0; space < (n - i) / 2; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (i = n - 2; i >= 1; i -= 2) {
        for (space = 0; space < (n - i) / 2; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter an odd number for the diamond's height: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
    } else {
        printDiamond(n);
    }

    return 0;
}