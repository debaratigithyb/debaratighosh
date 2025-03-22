#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    srand(time(0));
    int coin = rand() % 2;
    if (coin == 0) {
        printf("Heads\n");
    } 
	else 
	{
        printf("Tails\n");
    }
    
    return 0;
}