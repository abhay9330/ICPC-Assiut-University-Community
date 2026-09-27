// given two numbers N and M. Print the summation of their last digits.
#include <stdio.h>
int main()
{ 
 
    long long m , n;
scanf("%lld %lld", &m , &n);
printf("%lld", (m % 10)+(n % 10)); 
}
 


