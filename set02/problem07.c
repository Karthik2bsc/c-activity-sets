#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main()
{
	Triangle t=input_triangle();
	find_area(&t);
	output(t);
	return 0;
}
Triangle input_triangle()
{
	Triangle x;
	printf("Enter base: ");
	scanf("%f",&x.base);
	printf("Enter altitude: ");
	scanf("%f",&x.altitude);
	return x;
}
void find_area(Triangle *t)
{
	t->area= (t->base * t->altitude)/2;
}
void output(Triangle t)
{
	printf("The area of a triangle is %f",t.area);
}