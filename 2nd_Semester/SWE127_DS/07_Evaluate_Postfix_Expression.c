/**
                        -- Course Name : Data Structure --
                        -- Course No   : SWE127, SWE128 --
                        -- Problem No  : 007            --
                        -- Reg Number  : 2019831062     --
        -----------------------------------------------------------------
           Problem Statement :
        -----------------------------------------------------------------
        | Evaluate a Postfix Expression                                 |
        -----------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

#define STACK_MAX 1001
int cnt = 0;
typedef struct {
    int top;
    int data[STACK_MAX];
} Stack;

void printStack(Stack *s)
{
    int i;
    int n = s->top;
    printf("Current state of stack(pass %d): ", ++cnt);

    for(i=0; i<n; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int valueOf(char str[])
{
    int n = strlen(str);
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum * 10 + (str[i]-'0');
    }
    return sum;
}

void push(Stack *s, int item)
{
    if(s->top<STACK_MAX) {
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else {
        printf("Stack is full!\n");
    }
}

int pop(Stack *s)
{
    int item=-1;
    if(s->top==0) {
        return item;
    }
    else {
        s->top = s->top-1;
        item = s->data[s->top];
    }
    return item;
}

int main()
{
    Stack s;
    s.top = 0;
    int n;
    int a, b;
    int i;
    int value = 0;
    int item = 0;
    printf("Enter the size of postfix(1000 is the max stack size): ");
    scanf("%d", &n);
    getchar();
    printf("Enter the postfix expression(Put spaces between the objects): ");
    char arr[n][50];

    for(i=0; i<n; i++) {
        scanf("%s", arr[i]);
        int SZ = strlen(arr[i]);
        arr[i][SZ] = '\0';
    }
    printf("\n");
    for(i=0; i<n; i++) {
        printf("\n");
        item = 0;
        a = -1, b= -1;
        char str[50];
        memset(str, '\0', sizeof(str));
        strcpy(str, arr[i]);
        int sz = strlen(str);
        printf("Current object: %s\n", str);
        if(sz==1) {
            if(str[0]=='-'||str[0]=='+'||str[0]=='/'||str[0]=='*') {

                if(s.top==1) {
                    printf("There is only one operand in the stack.\n");
                    printStack(&s);
                    continue;
                }
                else if(s.top==0) {
                    printf("The stack is Empty!\n");
                    printStack(&s);
                    continue;
                }
                a = pop(&s);
                b = pop(&s);

                if(str[0]=='-') {
                     value = b-a;
                }
                else if(str[0]=='+') {
                    value = b+a;
                }
                else if(str[0]=='*') {
                    value = b*a;
                }
                else if(str[0]=='/') {
                    value = b/a;
                }
                push(&s, value);
            }
            else {
                item = valueOf(str);
                push(&s, item);
            }
        }
        else {
                item = valueOf(str);
                push(&s, item);
        }
        printStack(&s);

        if(i==n-1) {
            if(s.top>1) {
                printf("\nToo many operands left in the stack.\n");
            }
            else {
                printf("\nThe value of the postfix expression: %d\n", pop(&s));
            }
        }
    }
    return 0;

}
