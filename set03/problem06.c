#include<stdio.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
int main(){
    char a,b,string,substring;
    input_string(a,b);
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
int sub_str_index(char* string, char* substring){
    int index
}
void output(char *string, char *substring, int index);