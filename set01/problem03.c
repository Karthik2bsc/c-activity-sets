#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
    int a=input();
    int b=input();
    int sum=add(a,b);
    output(a,b,sum);
    return 0;
}
int input()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    return num;
}
int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void output(int a, int b, int sum)
{
    printf("Sum is %d",sum);
}