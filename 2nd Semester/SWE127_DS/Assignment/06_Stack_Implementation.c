/**
                        -- Course Name : Data Structure --
                        -- Course No   : SWE127, SWE128 --
                        -- Problem No  : 006            --
                        -- Reg Number  : 2019831062     --
        -----------------------------------------------------------------
           Problem Statement :
        -----------------------------------------------------------------
        | Stack:                                                        |
        | 1. push() function                                            |
        | 2. pop() function                                             |
        -----------------------------------------------------------------
*/
#include<stdio.h>

int stack[1000],top=0;
void push(int size)
{

    int num;
    if(top == size)
    {
        printf("STACK OVERFLOW\n");
        return;
    }
    printf("ENTER THE NUMBER YOU WANT TO PUSH: ");
    scanf("%d",&num);
    stack[top] = num;
    top++;
    printf("\n");
}
void pop(int size)
{
    int num;


    if(top == 0)
    {
        printf("STACK UNDERFLOW\n");
        return;
    }
    top--;
    printf("\n");
}
void output()
{
    if(top==0)
    printf("NO NUMBER HAS BEEN PUSHED YET\n");
    else
    printf("TOP VALUE OF THE STACK IS: %d\n",stack[top-1]);
    printf("\n");
}

int main()
{
    printf("ASSIGNMENT: 6\n\n");

    int opt,size;
    printf("ENTER THE STACK SIZE: ");
    scanf("%d",&size);

    while(1)
    {
       printf("\nENTER YOUR CHOICE(1->PUSH 2->POP 3->DISPLAY 4->TERMINATE PROGRAM) : ");
       scanf("%d",&opt);

       switch(opt)
       {
           case 1: push(size); break;
           case 2: pop(size);break;
           case 3: output(); break;
           case 4: printf("END OF STACK OPERATION\n"); return 0;
       }
    }
}

