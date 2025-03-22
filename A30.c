#include <stdio.h>
int count_digits(int num) 
{
    int count = 0;
    if (num == 0) return 1;
    while (num != 0) 
	{
    num /= 10;
    count++;
    }
    return count;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);   
    printf("The number of digits in %d is: %d\n", num, count_digits(num));    
    return 0;
}