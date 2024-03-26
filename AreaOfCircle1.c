#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float r,ca;
	printf("Enter redius to calculate area of circle :");
	scanf("%f",&r);
	ca=3.14*r*r;
	printf("area of circle is :%.2f",ca);
	return 0;
}
