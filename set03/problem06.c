#include<stdio.h>
#include<string.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
int main()
{
    char string[10],substring[10];
    input_string(string,substring);
    int index=sub_str_index(string,substring);
    output(string,substring,index);
    return 0;
}
void input_string(char* a, char* b)
{
    printf("enter the a string: ");
    scanf("%s",a);
    printf("enter the b string: ");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring)
{
    char *ptr = strstr(string, substring);
    if(ptr != NULL)
    {
        return ptr - string;
    }else
    {
        return -1;
    }
}
void output(char *string, char *substring, int index)
{
    printf("string:%s",string);
    printf("\nsubstring:%s",substring);
    if(index != -1)
    {
        printf("\nthe index for %s in %s will be %d",substring,string,index);
    }
}