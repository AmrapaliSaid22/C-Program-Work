#include <stdio.h>
#include <stdlib.h>

int main() {
	float b,h,ta;
	printf("Enter base & height to calculate area of triangle :");
	scanf("%f%f",&b,&h);
	// Area of Triangle = 1/2*(base * height)
	ta=0.5*b*h;
	printf("Area of Triangle is : %.2f",ta);
	return 0;
}
