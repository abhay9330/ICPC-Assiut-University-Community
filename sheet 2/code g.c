#include <stdio.h>
int main()
{
    int t;
    int x;
    long long fact;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &x);
        fact = 1;
        for (int j = 1; j <= x; j++)
        {
        fact = fact * j;
        }
        printf("%lld\n", fact);
    }
    return 0;
}