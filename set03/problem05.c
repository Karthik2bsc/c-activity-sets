#include<stdio.h>
#include<stdlib.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int main()
{
    int n=input_array_size();
    int a[n];init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}

int input_array_size()
{
    int x;
    printf("enter the array size: ");
    scanf("%d",&x);
    return x;
}
void init_array(int n, int a[n]){
    for(int i=0;i<=n;i++)
    {
        a[i]=1;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
    for(int p=2;p*p<=n;p++)
    {
        if(a[p] == 1)
        {
            for(int i=p*p;i<=n;i+=p)
            {
                a[i]=0;
            }
        }
    }
}
void output(int n, int a[n]){
    for(int i=2;i<=n;i++)
    {
        if(a[i]){
            printf("%d ",i);
        }
    }
}