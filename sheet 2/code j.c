#include <stdio.h>
int main()
{
int a;
int i;
int j;
    scanf("%d", &a);
    for(i = 2; i <= a; i++)
    {
        for(j = 2; j < i; j++)
        {
        if(i % j == 0)
         {
        break;
          }
        }
        if(j == i)
        {
           printf("%d ", i);
        }
    }}