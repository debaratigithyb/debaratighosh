#include <stdio.h>
int main() 
{
    int rollNumbers[] = {10, 12, 15, 20, 25, 30, 35, 40, 45, 50}; 
    int n = sizeof(rollNumbers) / sizeof(rollNumbers[0]); 
    int target = 40;  
    int found = 0;  
    for (int i = 0; i < n; i++) 
	{
    if (rollNumbers[i] == target) 
	{
    found = 1;
    break;
    }
}
if (found) 
{
    printf("Roll number %d is present in the list.\n", target);
    } 
	else 
	{
    printf("Roll number %d is not present in the list.\n", target);
    }
    return 0;
}