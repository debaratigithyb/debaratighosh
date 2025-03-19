#include<stdio.h>
int main()
{
	float c1,c2;
	scanf ("%f%f",c1,c2);
	c1=c2+c1;
	c2=c1-c2;
	c1=c1-c2;
	printf ("%f%f",c1,c2);
	return 0;
}