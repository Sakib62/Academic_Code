/**
                        -- Course Name : Data Structure --
                        -- Course No   : SWE127, SWE128 --
                        -- Problem No  : 008            --
                        -- Reg Number  : 2019831062     --
        -----------------------------------------------------------------
           Problem Statement :
        -----------------------------------------------------------------
        | Transform Infix Expression into Postfix Expression            |
        -----------------------------------------------------------------
*/
#include <stdio.h>
#include <ctype.h>

#define SIZE 50

char stack[SIZE];
int top=-1;

void push(char elem)
{
    top++;
    stack[top]=elem;
}

char pop()
{
    int x = stack[top];
    top--;
    return x;
}

int pr(char symbol)
{

	if(symbol=='^')return(3);
	else if(symbol=='*' || symbol=='/')return(2);
	else if(symbol=='+' || symbol=='-')return(1);
	else return(0);
}

int main()
{
    printf("ASSIGNMENT: 8\n\n");

    char infix[500],postfix[500],ch,elem;
    int i=0,k=0;
    printf("ENTER INFIX EXPRESSION : ");
    scanf("%s",infix);
    push('#');
    while( (ch=infix[i++]) != '\0')
    {
        if( ch == '(') push(ch);
        else
            if(isalnum(ch)) postfix[k++]=ch;
            else
                if( ch == ')')
                {
                    while( stack[top] != '(')
                        postfix[k++]=pop();
                    elem=pop();
                }
                else
                {
                    while( pr(stack[top]) >= pr(ch) )
                        postfix[k++]=pop();
                    push(ch);
                }
    }
    while( stack[top] != '#')
    postfix[k++]=pop();
    postfix[k]='\0';
    printf("\nPOSTFIX EXPRESSION:  %s\n",postfix);
}
