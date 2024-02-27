#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main()
{
    float x1,y1,x2,y2;
    input(&x1, &y1, &x2, &y2);
    float distance=find_distance(x1, y1, x2, y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("enter coordinates for (x1,y1):\n");
    scanf("%f %f", x1, y1);
    printf("enter coordinates for (x2,y2):\n");
    scanf("%f %f", x2, y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("Length of (%.2f, %.2f), (%.2f, %.2f) will be %.2f", x1, y1, x2, y2, distance);
}