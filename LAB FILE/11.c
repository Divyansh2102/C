#include<stdio.h>
#include<ctype.h>
void push(int x,int *stack,int *top)
{
    *top=*top+1;
    stack[*top] = x;
}

int pop(int *top,int *stack)
{
    return stack[(*top)--];
}
int main()
{
    int stack[100];
    int top=-1,n3,n,n1,n2;
    char exp[100];
    printf("enter postfix expression\n");
    fgets(exp,100,stdin);
    char *ptr;
    ptr=exp;
    while(*ptr != '\n')
    {
        if(isdigit(*ptr))
        {
            n = *ptr -48;
            push(n,stack,&top);
        }
        else
        {
            n1=pop(&top,stack);
            n2=pop(&top,stack);
            switch(*ptr)
            {
                case '+':
                {
                 n3=n1+n2;
                 break;
                }
                case '-':
                {
                 n3=n2-n1;
                 break;
                }
                case '/':
                {
                 n3=n2/n1;
                 break;
                }
                case '*':
                {
                 n3=n1*n2;
                 break;
                } 
            }
            push(n3,stack,&top);
        }
        ptr++;
    }
    printf("result = %d",pop(&top,stack));
}

