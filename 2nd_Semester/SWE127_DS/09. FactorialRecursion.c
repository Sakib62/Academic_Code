/**
                        -- Course Name : Data Structure --
                        -- Course No   : SWE127, SWE128 --
                        -- Problem No  : 009            --
                        -- Reg Number  : 2019831062     --
        -----------------------------------------------------------------
           Problem Statement :
        -----------------------------------------------------------------
        | Recursion                                                     |
        | 1. Factorial Calculation                                      |
        -----------------------------------------------------------------
*/

#include<stdio.h>
#define ull unsigned long long

ull factorial(ull num)
{
    if(num == 1)return 1;
    return num * factorial(num - 1);
}

int main()
{
    printf("ASSIGNMENT: 6\n\n");

    ull num,ans;
    printf("ENTER THE NUMBER: ");

    scanf("%llu",&num);
    ans = factorial(num);
    printf("%llu! is equal to %llu\n",num,ans);

}
