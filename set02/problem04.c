#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
    int n=input_array_size();int a[n];
    input_array(n,a);
    int sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}
int input_array_size()
{
    int num;
    printf("enter size: ");
    scanf("%d",&num);
    return num;
}
void input_array(int n, int a[n])
{
    printf("enter %d array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int is_composite(int num) {
    if (num <= 1) {
    return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}
int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}
void output(int sum)
{
    printf("sum of composite numbers are %d",sum);
}