#include <stdio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int lastDigit = num - ((num / 10) * 10);
    printf("The last digit is: %d\n", lastDigit);
    return 0;
}