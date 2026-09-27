#include <stdio.h>
int main()
{
int a;
int i;
int max=0;
int num=0;
 scanf("%d", &a);
 
    for(i = 1; i <= a; i++){
  scanf("%d", &num);
    if(num > max)
    max = num;
    }
    printf("%d", max);
    
 
    
 
}