// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159

int main(void) {
	
	// takes input radius - could be non integer
	double radius;
	printf("Enter your radius: \n");
	scanf("%lf", &radius);
	
	// calculates area and prints
	double area = PI*radius*radius;
	printf("The area of circle is %lf\n", area);


	return 0;
}
