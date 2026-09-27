#include <stdio.h>
int main()
{
int N;
int n;
int i ;
int even=0;
int odd=0; int negative=0; int positive=0; 
scanf("%d" , &N);
for( i=1;i<=N;i++)
{scanf("%d" , &n);
if(n%2==0)
even++;
if(n%2!=0)
odd++;
if(n>0)
positive++;
if(n<0)
negative++;}
 
printf("Even: %d\n", even);
printf("Odd: %d\n", odd);
printf("Positive: %d\n", positive);
printf("Negative: %d\n", negative);
 
}