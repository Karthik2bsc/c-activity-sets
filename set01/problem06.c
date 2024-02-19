#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}
int input(int *a, int *b, int *c)
{
    printf("Enter a num: ");
    scanf("%d",a);
    printf("Enter b num: ");
    scanf("%d",b);
    printf("Enter c num: ");
    scanf("%d",c);
    return 0;
}
void compare(int a, int b, int c, int *largest)
{
    if(a>=b && a>=c)
    {
        *largest = a;
    }
    else if(b>=a && b>=c)
    {
        *largest = b;
    }
    else 
    {
        *largest = c;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("the largest of %d,%d,%d will be %d",a,b,c,largest);
}