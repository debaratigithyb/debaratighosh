#include <stdio.h>
#include <math.h>
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
int reverse_number(int num) 
{
    int reverse = 0;
    while (num != 0) 
	{
    reverse = reverse * 10 + num % 10;
    num /= 10;
    }
    return reverse;
}
int is_palindrome(int num) 
{
    return num == reverse_number(num);
}
int is_armstrong(int num) {
    int original = num, sum = 0, digits = count_digits(num);
    while (num != 0) {
    sum += pow(num % 10, digits);
    num /= 10;
    }
    return sum == original;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);    
    printf("The number of digits in %d is: %d\n", num, count_digits(num));
    printf("The sum of digits in %d is: %d\n", num, sum_of_digits(num));
    printf("The reverse of %d is: %d\n", num, reverse_number(num));  
    if (is_palindrome(num)) 
	{
    printf("%d is a palindrome.\n", num);
    } 
	else 
	{
    printf("%d is not a palindrome.\n", num);
    }    
    if (is_armstrong(num)) 
	{
    printf("%d is an Armstrong number.\n", num);
    } 
	else 
	{
    printf("%d is not an Armstrong number.\n", num);
    }    
    return 0;
}