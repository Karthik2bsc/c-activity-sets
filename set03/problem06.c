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
void input_string(char *a, char *b)
{
    printf("Enter the a string: ");
    scanf("%s",a);
    printf("Enter the b string: ");
    scanf("%s",b);
}
int sub_str_index(char *string, char *substring)
{
    int string_length=0;
    int substring_length=0;
    while(string[string_length]!='\0')
    {string_length++;}
    while(substring[substring_length]!='\0')
    {substring_length++;}
    for(int i=0;i <= string_length - substring_length;i++)
    {
        int j;
        for(j=0;j < substring_length;j++)
        {
            if(string[i+j]!=substring[j])
            {
                break;
            }
        }
        if(j == substring_length)
        {
            return i;
        }
    }
    return -1;
}
void output(char *string, char *substring, int index)
{
    printf("String:%s",string);
    printf("\nSubstring:%s",substring);
    if(index != -1)
    {
        printf("\nThe index for %s in %s will be %d",substring,string,index);
    }
}