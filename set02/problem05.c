#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int a=input();
    int b=input();
    int gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
int input()
{
    int x;
    printf("Enter the digits: ");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a, int b)
{
    int z;
    while(b!=0)
    {
        z=b;
        b=a%b;
        a=z;
    }
    return a;
}
void output(int a, int b, int gcd)
{
    printf("GCD of %d,%d is %d",a,b,gcd);
}