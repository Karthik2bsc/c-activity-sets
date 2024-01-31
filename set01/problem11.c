#include<stdio.h>
struct _complex {
	float real;
	float img;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main()
{
	Complex a=input_complex();
	Complex b=input_complex();
	Complex sum=add_complex(a,b);
	output(a,b,sum);
	return 0;
}
Complex input_complex()
{
	Complex n;
	printf("enter the num: ");
	scanf("%f",&n.real);
	printf("enter the num: ");
	scanf("%f",&n.img);
	return n;
}
Complex add_complex(Complex a, Complex b)
{
	Complex sum={0,0};
	sum.real=a.real+b.real;
	sum.img=a.img+b.img;
	return sum;
}
void output(Complex a, Complex b, Complex sum)
{
	printf("sum will be %f + %fi",sum.real,sum.img);
}