//Given a number N
// Print the summation of the numbers that is between 1 and N

#include <stdio.h>
int main() {
    long long N;
    scanf("%lld", &N);
    printf("%lld", N * (N + 1) / 2);

    
}
