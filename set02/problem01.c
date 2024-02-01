#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}
void input(float *base, float *height)
{
    printf("enter the base: ");
    scanf("%f",base);
    printf("enter the height: ");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area=(base * height)/2;
}
void output(float base, float height, float area)
{
    printf("area of triangle with base %f and height %f will be %f",base,height,area);
}