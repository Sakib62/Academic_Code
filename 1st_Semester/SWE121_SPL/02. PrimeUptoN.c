///Sakibul Islam
///2019831062
///C assignment-problem2

#include<stdio.h>
#include<math.h>

int prime(int p);

int main()
{
    int n, i;
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        int ans = prime(i);
        if(ans != 0)
        {
            printf("\n%d\n", ans);
        }
    }
}

int prime(int p)
{
    if(p < 2)
        return 0;
    for(int j = 2; j <= sqrt(p); j++)
    {
        if(p%j == 0)
        {
            return 0;
        }
    }
    return p;
}
