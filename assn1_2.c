#include <stdio.h>
#include <math.h>

int main() {

	float x1, y1, x2, y2;
	float gradient, y_intercept, distance;

	printf("Enter P1(x1, y1) : ");
	scanf("%f %f", &x1, &y1);

	printf("Enter P2(x2, y2) : ");
	scanf("%f %f", &x2, &y2);

	gradient = (y2 - y1) / (x2 - x1);

	y_intercept = y1 - (x1 * gradient);

	distance = sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));

	printf("The line passing through P1 and P2 is y = (%.2f)x + (%.2f)\n", gradient, y_intercept);
	printf("The distance between P1 and P2 is %.2f\n", distance);

	return 0;
}