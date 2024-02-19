#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
    int a=input();
    int b=input();
    int c=input();
    int largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
int input()
{
    int n;
    printf("Enter the num: ");
    scanf("%d", &n);
    return n;
}
int compare(int a, int b, int c)
{
    if(a>=b && a>=c)
    return a;
    else if(b>=a && b>=c)
    return b;
    else
    return c;
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d,%d,%d will be %d",a,b,c,largest);
}