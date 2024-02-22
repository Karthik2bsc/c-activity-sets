#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char string1[10],string2[10];
    input_two_strings(string1,string2);
    int result=stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the string1: ");
    scanf("%s",string1);
    printf("Enter the string2: ");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
    if(string1>string2)
    return 0;
    else if(string1<string2)
    return 1;
    else
    return 2;
}
void output(char *string1, char *string2, int result)
{
    if(result=0)
    {
        printf("%s will be greater than %s",string1,string2);
    }
    else if(result=1)
    {
        printf("%s will be greater than %s",string2,string1);
    }
    else
    {
        printf("%s will be equal to %s",string1,string2);
    }
}