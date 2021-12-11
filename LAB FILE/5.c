#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *ptr, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    ptr = exp;
    
    while(*ptr != '\0')
    {
        if(isalnum(*ptr))
            printf("%c ",*ptr);
        else if(*ptr == '(')
            push(*ptr);
        else if(*ptr == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*ptr))
                printf("%c ",pop());
            push(*ptr);
        }
        ptr++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}

