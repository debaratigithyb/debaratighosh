#include <stdio.h>
int main() 
{
    int sum_natural = 0;
    int sum_odd = 0;    
    for (int i = 1; i <= 10; i++) 
	{
    sum_natural += i;
    }    
    for (int i = 1, count = 0; count < 10; i += 2, count++) 
	{
    sum_odd += i;
    }    
    printf("The sum of the first 10 natural numbers is: %d\n", sum_natural);
    printf("The sum of the first 10 odd natural numbers is: %d\n", sum_odd);    
    return 0;
}