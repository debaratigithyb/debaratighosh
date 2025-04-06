#include<stdio.h>
int main()
{
	int i=0 , j=0;
	for (i=1 ; i<=4 ; i++);
	{
		for (j=4 ; j>=i ; j--);
		{
			printf("%d",j);
		}
		printf ("\n");
	}
	return 0;
}