#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n=input();
    float sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input()
{
    float n;
    printf("Enter the number: ");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float x=n;
    float y=1;
    float e=0.000001;
    while(x-y>e)
    {
        x=(x+y)/2;
        y=n/x;
    }
return x;
}
void output(float n, float sqrroot)
{
    printf("Squareroot of %f will be %f",n,sqrroot);
}