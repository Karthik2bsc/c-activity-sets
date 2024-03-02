#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main()
{
    int n=input();
    int fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}
int input()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    return x;
}
int find_fibo(int n)
{
    int fibo[n+1];
    for(int i=2;i<n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    return fibo[n];
}
void output(int n, int fibo)
{
    printf("Fibo(%d)=%d",n,fibo);
}