#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main()
{
    int n=input_n();
    int sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}
int input_n()
{
    int x;
    printf("Enter x value: ");
    scanf("%d",&x);
    return x;
}
int sum_n_nos(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("Sum till %d will be %d",n,sum);
}