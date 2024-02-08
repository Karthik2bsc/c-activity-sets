#include<stdio.h>
#include<string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char a[10],reverse_a[10];input_string(a);
    str_reverse(a,reverse_a);
    output(a,reverse_a);
    return 0;
}
void input_string(char *a)
{
    printf("Enter a value: ");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        rev_str[i] = str[length - i - 1];
    }
    rev_str[length] = '\0';
}
void output(char *a, char *reverse_a)
{
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}