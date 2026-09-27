//Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
#include <stdio.h>

int main() {
    long long x, y;

    scanf("%lld %lld", &x, &y);

    printf("%lld + %lld = %lld\n", x, y, x + y);
    printf("%lld * %lld = %lld\n", x, y, x * y);
    printf("%lld - %lld = %lld\n", x, y, x - y);



    
}
