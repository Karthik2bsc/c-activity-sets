#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main()
{
    float x1,x2,x3,y1,y2,y3;
    input_triangle(&x1,&x2,&x3,&y1,&y2,&y3);
    int result=is_triangle( x1,  y1,  x2,  y2, x3,  y3);
    output( x1,  y1,  x2,  y2, x3,  y3, result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter coordinates for (x1,y1):\n");
    scanf("%f %f",x1,y1);
    printf("enter coordinates for (x2,y2):\n");
    scanf("%f %f",x2,y2);
    printf("enter coordinates for (x3,y3):\n");
    scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float side1=sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    float side2=sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    float side3=sqrt(pow(x1-x3,2) + pow(y1-y3,2));
    if(side1+side2 > side3 && side2+side3 > side1 && side3+side1 > side2)
    {
        return 1;
    }
    else {
        return 0;
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result)
    {
        printf("It forms a valid triangle.");
    }
    else {
        printf("It does not form valid trianlge.");
    }
}