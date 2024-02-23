#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
    int a=input_side();
    int b=input_side();
    int c=input_side();
    int isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
int input_side()
{
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);
    return n;
}
int check_scalene(int a, int b, int c)
{
    if(a!=b && b!=c && a!=c)
    return 1;
    else
    return 0;
}
void output(int a, int b, int c, int isscalene)
{
    if(1)
    {
        printf("The triangle is scalene");
    }
    else
    {
        printf("The triangle is not scalene");
    }
}