//given 4 no a  b c d print their last 2 digit from their multiplication
#include <stdio.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    A = A % 100;
    B = B % 100;
    C = C % 100;
    D = D % 100;

    printf("%02lld", (A * B * C * D) % 100);

    return 0;
}