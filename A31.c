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
int sum_of_digits(int num) 
{
    int sum = 0;
    while (num != 0) 
	{
    sum += num % 10;
    num /= 10;
    }
    return sum;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);    
    printf("The number of digits in %d is: %d\n", num, count_digits(num));
    printf("The sum of digits in %d is: %d\n", num, sum_of_digits(num));   
    return 0;
}